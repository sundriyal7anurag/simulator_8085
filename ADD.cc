//#include<bits/stdc++.h>
#include"Datatypes.h"
#include"HexInt.h"
#include"IntHex.h"
#include"Transform.h"
#include"RegistersStandardization.h"
using namespace std;
void ADD(string R){
    int R1=HexInt(registers[R]);
    int R2=HexInt(registers["A"]);
    int sum;
    sum=R1+R2;
    if(sum>255){
        sum=255;
        flags["carry"]="1";
    }
    R=IntHex(sum);
    registers["A"]=Standardization(transform1(R));
   // cout<<registers["A"]<<endl;
}

