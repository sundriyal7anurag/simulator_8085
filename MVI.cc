#include"Datatypes.h"
#include"RegistersStandardization.h"
void MVI(string R,string data){
    registers[R]=Standardization(data);
}
