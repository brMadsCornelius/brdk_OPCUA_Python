import asyncio
from asyncua import ua, uamethod, Server

# method to be exposed through server
def func(parent, variant):
    ret = False
    if variant.Value % 2 == 0:
        ret = True
    return [ua.Variant(ret, ua.VariantType.Boolean)]

async def main():

    # now set up our server
    server = Server()
    await server.init()
    server.set_endpoint("opc.tcp://0.0.0.0:4840")                # Use the PCs IP here.
    server.set_server_name("B&RDK OPCUA Server")

    # B&R clients needs "MaxBrowseContinuationPoints" to be different from null otherwise a connectio can't be established (node specified in opcua standard)
    max_browse_continuation_points_node = server.get_node(ua.NodeId(2735, 0))
    await max_browse_continuation_points_node.set_value(ua.Variant(10, ua.VariantType.UInt16))
    ServiceLevel = server.get_node(ua.NodeId(2267, 0))
    await ServiceLevel.set_value(ua.Variant(255, ua.VariantType.Byte))

    # set up our own namespace
    uri = "http://brdk.opcua.com"
    idx = await server.register_namespace(uri)

    # get Objects node, this is where we should put our custom stuff
    objects = server.nodes.objects

    # populating our address space with some random stuff
    testFolder = await objects.add_object(idx, "TestFolder")
    myvar = await testFolder.add_variable(idx, "MyVariable", 6.7)
    myvar = await testFolder.add_variable(idx, "MyVariable2", 42.0)
    await myvar.set_writable()  # Set MyVariable to be writable by clients
    mystringvar = await testFolder.add_variable(idx, "MyStringVariable", "Really nice string")
    await mystringvar.set_writable()  # Set MyVariable to be writable by clients
    myarrayvar = await testFolder.add_variable(idx, "myarrayvar", [6.7, 7.9])
    myuintvar = await testFolder.add_variable(idx, "myuintvar", ua.UInt16(4))
    await testFolder.add_variable(idx, "myStronglytTypedVariable", ua.Variant([], ua.VariantType.UInt32))
    await myarrayvar.set_writable(True)
    myprop = await testFolder.add_property(idx, "myproperty", "I am a property")
    mymethod = await testFolder.add_method(
        idx, "mymethod", func, [ua.VariantType.UInt32], [ua.VariantType.Boolean]
    )

    async with server:
        while True:
            # Running every 100ms.
            await asyncio.sleep(0.1)


if __name__ == "__main__":
    asyncio.run(main())