import asyncio
from asyncua import ua, uamethod, Server
import json

async def main():

    # now set up our server
    server = Server()
    await server.init()
    server.set_endpoint("opc.tcp://0.0.0.0:4840")                # Server endpoint
    server.set_server_name("B&RDK OPCUA Server")

    # B&R clients needs "MaxBrowseContinuationPoints" to be different from null otherwise a connection can't be established (node specified in opcua standard)
    max_browse_continuation_points_node = server.get_node(ua.NodeId(2735, 0))
    await max_browse_continuation_points_node.set_value(ua.Variant(10, ua.VariantType.UInt16))
    ServiceLevel = server.get_node(ua.NodeId(2267, 0))
    await ServiceLevel.set_value(ua.Variant(255, ua.VariantType.Byte))

    # set up our own namespace
    uri = "http://brdk.opcua.com"
    idx = await server.register_namespace(uri)

    # populating our address space with some random stuff
    Variables = await server.nodes.objects.add_object(idx, "Variables")

    filename = "AsNodes.json"
    with open(filename, "r") as json_file:
        data = json.load(json_file)

    # Iterate through the JSON file and add all the specified nodes
    for key, values in data.items():
        for value in values:
            if key == "BOOL":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(False, ua.VariantType.Boolean))
                await myvar.set_writable()
            elif key == "USINT":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0, ua.VariantType.Byte))
                await myvar.set_writable()
            elif key == "SINT":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0, ua.VariantType.SByte))
                await myvar.set_writable()
            elif key == "UINT":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0, ua.VariantType.UInt16))
                await myvar.set_writable()
            elif key == "INT":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0, ua.VariantType.Int16))
                await myvar.set_writable()
            elif key == "DINT":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0, ua.VariantType.Int32))
                await myvar.set_writable()
            elif key == "UDINT":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0, ua.VariantType.UInt32))
                await myvar.set_writable()
            elif key == "REAL":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant(0.0, ua.VariantType.Float))
                await myvar.set_writable()
            elif key == "STRING":
                myvar = await Variables.add_variable(ua.NodeId(value,idx), value, ua.Variant("", ua.VariantType.String))
                await myvar.set_writable()
            else:
                print(f"Datatype doesn't exist: {key}")


    async with server:
        while True:
            # Running every 100ms.
            await asyncio.sleep(0.1)


if __name__ == "__main__":
    asyncio.run(main())
