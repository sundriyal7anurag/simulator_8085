#include<bits/stdc++.h>
#include"Datatypes.h"
#include"ADI.cc"
#include"ADD.cc"
#include"SUB.cc"
#include"SUI.cc"
#include"LDA.cc"
#include"MOV.cc"
#include"LXI.cc"
//MIND IT MAP ARE IN STRING ,SO WHILE ASSIGNING THE VALUE ALWAYS USE STRING
using namespace std;
 int main()
 {
    memory["2500"]="F";
    LDA("2500");

    registers["C"]="1";
    ADD("C");

    registers["B"]="A";
    SUB("B");

    registers["C"]="A";
    MOV("C","A");

    SUI("01");

    memory["2700"]="9";
    memory["2701"]="13";
    LXI("D","2700");


 }
