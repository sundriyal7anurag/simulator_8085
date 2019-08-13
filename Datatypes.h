//Datatypes
#include<bits/stdc++.h>
#ifndef DATATYPES_CC
#define DATATYPES_CC
using namespace std;
 map<string,string> memory; //memory
 map<string,string> registers; //regiters
 int starting_address;
 map<string,pair<string,pair<string,string> > > code;//statements
 map<string,pair<string,pair<string,string> > >::iterator it;
 map<string,string>::iterator mit;
 map<string,string> flags;
 void initialization()
 {
     flags["sign"]="0";
     flags["zero"]="0";
     flags["parity"]="0";
     flags["carry"]="0";
 }
 //int carry;
#endif
