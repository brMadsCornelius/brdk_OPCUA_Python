
TYPE
	Sweep_typ : 	STRUCT 
		input : Sweep_input_typ;
		output : Sweep_output_typ;
	END_STRUCT;
	Sweep_input_typ : 	STRUCT 
		StartFrequency : LREAL;
		StopFrequency : LREAL;
		SweepPoints : DINT;
		SourceLevel : LREAL;
	END_STRUCT;
	Sweep_output_typ : 	STRUCT 
		QFactor : LREAL;
		ResonanceFrequency : LREAL;
		Bandwidth : LREAL;
	END_STRUCT;
END_TYPE
