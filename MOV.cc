#include"Datatypes.h"
#include"RegistersStandardization.h"
void MOV(string R1,string R2)
{
    string temp=registers[R2];

    registers[R1]=Standardization(registers[R2]);
    if(R1=="M"){
      memory[registers["H"]+registers["L"]]=registers["M"];
	}
}
