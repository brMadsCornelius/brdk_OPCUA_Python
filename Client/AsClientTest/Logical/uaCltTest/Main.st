// CLIENT SAMPLE TASK to read out the nodes from a OPCUA server. 

PROGRAM _INIT
	// Setup for all clients
	FOR i:=0 TO MAX_OPCUA_CLIENTS DO
		EasyUaReads[i].ServerEndpointUrl := 'opc.tcp://127.0.0.2:4840'; // Don't use 127.0.0.1 as AS simulator put the server here as default.
		EasyUaReads[i].NamespaceUri := 'http://brdk.opcua.com';			// Specified on the server.
		EasyUaReads[i].NodeID.IdentifierType := UAIdentifierType_String;
	END_FOR
	
	// Setup for each node
	myBool;
	EasyUaReads[0].NodeID.Identifier := 'myBool';
	EasyUaReads[0].Variable := '::uaCltTest:myBool';
	
	myUsint;
	EasyUaReads[1].NodeID.Identifier := 'myUsint';
	EasyUaReads[1].Variable := '::uaCltTest:myUsint';
	
	mySint;
	EasyUaReads[2].NodeID.Identifier := 'mySint';
	EasyUaReads[2].Variable := '::uaCltTest:mySint';
	
	myUint;
	EasyUaReads[3].NodeID.Identifier := 'myUint';
	EasyUaReads[3].Variable := '::uaCltTest:myUint';
	
	myInt;
	EasyUaReads[4].NodeID.Identifier := 'myInt';
	EasyUaReads[4].Variable := '::uaCltTest:myInt';

	myDint;
	EasyUaReads[5].NodeID.Identifier := 'myDint';
	EasyUaReads[5].Variable := '::uaCltTest:myDint';
	
	myUdint;
	EasyUaReads[6].NodeID.Identifier := 'myUdint';
	EasyUaReads[6].Variable := '::uaCltTest:myUdint';
	
	myReal;
	EasyUaReads[7].NodeID.Identifier := 'myReal';
	EasyUaReads[7].Variable := '::uaCltTest:myReal';
	
	myString;
	EasyUaReads[8].NodeID.Identifier := 'myString';
	EasyUaReads[8].Variable := '::uaCltTest:myString';
	
	TON_0.PT := T#2s;
	
END_PROGRAM

PROGRAM _CYCLIC

	FOR i:=0 TO MAX_OPCUA_CLIENTS DO
		EasyUaReads[i]();
	END_FOR
	
END_PROGRAM

PROGRAM _EXIT
	FOR i:=0 TO MAX_OPCUA_CLIENTS DO
		EasyUaReads[i].Execute := FALSE;
		EasyUaReads[i]();
	END_FOR
END_PROGRAM

