#include<bits/stdc++.h>
#include"Datatypes.h"
#include"HexInt.h"
#include"IntHex.h"
#include"Transform.h"
#include"RegistersStandardization.h"
using namespace std;
void SUI(string R){

    int R1=HexInt(R);
    int R2=HexInt(registers["A"]);
    int a=R2-R1;
    if(a<0){
        flags["sign"]="1";
        a=a*-1;
    }
    R=IntHex(a);
    registers["A"]=Standardization(transform1(R));
   }
