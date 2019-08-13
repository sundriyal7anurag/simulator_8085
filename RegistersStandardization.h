#ifndef REGISTERSSTANDARDIZATION_H
#define REGISTERSSTANDARDIZATION_H
#include<bits/stdc++.h>
#include"Datatypes.h"
using namespace std;
string Standardization(string Register_Value){
   if(Register_Value.length()==0)
    {
            return ("00");
    }
    else if(Register_Value.length()==1){

        string a="0";
       return a.append(Register_Value);
    }
    else
        return Register_Value;
}
#endif
