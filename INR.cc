#include"Datatypes.h"
#include"RegistersStandardization.h"
void INR(string R){

    int sum=0;
    int R1=HexInt(registers[R]);
    sum=R1+1;
    if(sum>255){
        sum=255;
        flags["carry"]="1";
    }
    registers[R]=Standardization(transform1(IntHex(sum)));
}
