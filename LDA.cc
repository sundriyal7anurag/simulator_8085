#include"Datatypes.h"
#include"RegistersStandardization.h"
void LDA(string address){

    registers["A"]=Standardization(memory[address]);

}
