# Client example in Automation Studio

In task "uaCltTest" an example can be seen that reads all the nodes from the OPCUA server. Example


```
EasyUaReads.ServerEndpointUrl := 'opc.tcp://127.0.0.2:4840';
EasyUaReads.NamespaceUri := 'http://brdk.opcua.com';	
EasyUaReads.NodeID.IdentifierType := UAIdentifierType_String;
EasyUaReads.NodeID.Identifier := 'myUsint';
EasyUaReads.Variable := '::uaCltTest:myUsint';
```

When EasyUaReads.Execute=TRUE the function block will read the opcua node on server named "myUsint" and put it in the variable on PLC: "::uaCltTest:myUsint" .