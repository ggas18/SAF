I-Logix-RPY-Archive version 8.10.0 C++ 6930133
{ IProject 
	- _id = GUID 9bcac4dc-aa6a-4b77-b211-099db7adb831;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 2;
			- value = 
			{ IPropertySubject 
				- _Name = "Browser";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Settings";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ShowPredefinedPackage";
								- _Value = "False";
								- _Type = Bool;
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "CPP_CG";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Configuration";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "Environment";
								- _Value = "Cygwin";
								- _Type = Enum;
								- _ExtraTypeInfo = "MSVC,MSVCDLL,MSVCStandardLibrary,VxWorks,VxWorks6diab,VxWorks6gnu,VxWorks6diab_RTP,VxWorks6gnu_RTP,Solaris2,Cygwin,MicrosoftWinCE600,OseSfk,Linux,Solaris2GNU,QNXNeutrinoGCC, QNXNeutrinoMomentics,NucleusPLUS-PPC,WorkbenchManaged,WorkbenchManaged653,WorkbenchManaged_RTP";
							}
						}
					}
				}
			}
		}
	}
	- _name = "SAAF_EXO";
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy\\SysML.sbs";
			- _subsystem = "SysML";
			- _class = "";
			- _name = "SysML";
			- _id = GUID 052b8171-a32b-4f45-a829-5585f79f9deb;
		}
	}
	- _modifiedTimeWeak = 6.4.2017::18:24:38;
	- _lastID = 2;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "ActorPkg.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "ActorPkg";
		- _id = GUID 59e8c7d6-8ba9-48bf-a677-6d2bd696c263;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "DefaultComponent.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "DefaultComponent";
		- _id = GUID f899a2db-054c-4f4b-9e13-cca975e17c96;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 10;
		- value = 
		{ IProfile 
			- fileName = "SysML";
			- _persistAs = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy";
			- _id = GUID d9689b73-885e-44c4-896b-de43defa0a33;
			- _isReference = 1;
		}
		{ IProfile 
			- fileName = "HarmonySE";
			- _persistAs = "$OMROOT\\Profiles\\HarmonySE";
			- _id = GUID 29d4fccc-40d9-4cb3-af8a-d7464f198819;
			- _isReference = 1;
		}
		{ ISubsystem 
			- fileName = "ActorPkg";
			- _id = GUID 59e8c7d6-8ba9-48bf-a677-6d2bd696c263;
		}
		{ ISubsystem 
			- fileName = "DesignSynthesisPkg";
			- _id = GUID 0ffca453-1ed2-41c9-8abb-dfc32666016a;
		}
		{ ISubsystem 
			- fileName = "FunctionalAnalysisPkg";
			- _id = GUID c3c51aa3-b5ca-4246-abb0-9551836d1b25;
		}
		{ ISubsystem 
			- fileName = "InterfacesPkg";
			- _id = GUID e689c855-5a97-4a5e-b526-6275f0eed234;
		}
		{ ISubsystem 
			- fileName = "TypesPkg";
			- _id = GUID d3ad0dc5-4ae9-47c5-8dc4-7dcd190fbaa5;
		}
		{ ISubsystem 
			- fileName = "SystemRequirementsAnalysisPkg";
			- _id = GUID ba3adecd-1c06-48fb-b099-01221bdd40bc;
		}
		{ ISubsystem 
			- fileName = "RequirementsDefinitionPkg";
			- _id = GUID 3b403c0e-cee5-4cf5-b424-60b24110e4f2;
		}
		{ ISubsystem 
			- fileName = "GatewayProjectFiles";
			- _id = GUID bd500741-0979-4dd7-ad0c-1d4651765e6a;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "DefaultComponent";
			- _id = GUID f899a2db-054c-4f4b-9e13-cca975e17c96;
		}
	}
}

