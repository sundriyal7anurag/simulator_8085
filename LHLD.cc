#include"Datatypes.h"
#include"IntHex.h"
#include"HexInt.h"
#include"RegistersStandardization.h"
void LHLD(string address){
    registers["H"]=Standardization(memory[address]);
        int add=HexInt(address);
        address=IntHex(add+1);
        registers["L"]=Standardization(memory[address]);
}
