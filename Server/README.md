# brdk_OPCUA_Python Server



A configurable OPCUA server. Specify the nodes you want on the server in AsNodes.json. An example of the json could be:
```json
{
    "BOOL": ["myBool","myBool2"],
    "USINT": ["myUsint","myUsint2"],
    "SINT": ["mySint"],
    "UINT": ["myUint"],
    "INT": ["myInt"],
    "DINT": ["myDint"],
    "UDINT": ["myUdint"],
    "REAL": ["myReal"],
    "STRING": ["myString"]
}
```

Each node will be created on the server in the following namespace Uri:

`"http://brdk.opcua.com"`

And have a string identifier equal to the name that is given in the JSON (see client folder for example).



## Run server

Install requirements on your PC:

`pip install -r requirements.txt`

Run the server script:

`python OpcuaServer.py`

## Run server using Docker

Build the docker image:

`docker build -t opcuaserver-dockerization .`

Run the docker container:

`docker run -p 4840:4840 --name OpcuaServer opcuaserver-dockerization`





