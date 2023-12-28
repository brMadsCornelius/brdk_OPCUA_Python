# brdk_OPCUA_Python Server



A configurable OPCUA server.



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





