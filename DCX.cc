#include"Datatypes.h"
#include"IntHex.h"
#include"HexInt.h"
#include"Transform.h"
#include"RegistersStandardization.h"
void DCX(string R){

    int sum=0;
    string temp;
    if(R=="H"){
        if(HexInt(registers["L"]) >0 && HexInt(registers["L"]) <=255){
               sum= HexInt(registers["L"]);

               sum=sum-1;

               temp=IntHex(sum);
               temp=transform1(temp);

               registers["L"]=Standardization(temp);
        }
        else if( HexInt(registers["L"])==0){

                if(HexInt(registers["H"])>1){
                       temp=registers["H"];
                       temp.append(registers["L"]);
                       sum= HexInt(temp);
                       sum=sum-1;

                       temp=transform1(IntHex(sum));

                       registers["L"]=temp.substr(temp.length()-2,2);

                       registers["H"]=Standardization(temp.substr(0,temp.length()-2));

                }
                else{//SAME AS else if(HexInt(registers["H"])==1 ||HexInt(registers["H"])==0)

                       temp=registers["H"];
                       sum= HexInt(temp);
                       sum=abs(sum-1);   //YAHA PE KUCH CONDITION HOGI? IF H==0  AND  L==0 => SUM==0 => WHEN SUM=SUM-1 =>SUM=-1  SO IS IT CORRECT?
                       temp=transform1(IntHex(sum));
                       registers["L"]=Standardization(temp);
                       registers["H"]="00";
                  }


        }
                       temp=registers["H"];
                       temp.append(registers["L"]);
                       registers["M"]=memory[temp];

    }
    else if(R=="B"){
        if(HexInt(registers["C"])>0 && HexInt(registers["C"])<=255){
               sum= HexInt(registers["C"]);
               sum=sum-1;
               temp=IntHex(sum);
               temp=transform1(temp);
               registers["C"]=Standardization(temp);
        }
        else if( HexInt(registers["C"])==0){
                if(HexInt(registers["B"])>1){
                       temp=registers["B"];
                       temp.append(registers["C"]);
                       sum= HexInt(temp);
                       sum=sum-1;
                       temp=transform1(IntHex(sum));
                       registers["C"]=temp.substr(temp.length()-2,2);
                       registers["B"]=Standardization(temp.substr(0,temp.length()-2));

                }
                else{//SAME AS else if(HexInt(registers["H"])==1 ||HexInt(registers["H"])==0)
                       temp=registers["B"];
                       sum= HexInt(temp);
                       sum=sum-1;   //YAHA PE KUCH CONDITION HOGI? IF H==0  AND  L==0 => SUM==0 => WHEN SUM=SUM-1 =>SUM=-1  SO IS IT CORRECT?
                       temp=transform1(IntHex(sum));
                       registers["C"]=temp;
                       registers["B"]="00";
                  }

            //registers["M"]=memory[temp];
           // cout<<"r[M] "<<registers["M"]<<"m[temp]"<<memory[temp]<<endl;
        }
    }
    else if(R=="D"){
          if(HexInt(registers["E"])>=0 && HexInt(registers["E"])<255){
               sum= HexInt(registers["E"]);
               sum=sum-1;
               temp=IntHex(sum);
               temp=transform1(temp);
               registers["E"]=Standardization(temp);
        }
        else if( HexInt(registers["E"])==0){
                if(HexInt(registers["D"])>1){
                       temp=registers["D"];
                       temp.append(registers["E"]);
                       sum= HexInt(temp);
                       sum=sum-1;
                       temp=transform1(IntHex(sum));
                       registers["E"]=temp.substr(temp.length()-2,2);
                       registers["D"]=Standardization(temp.substr(0,temp.length()-2));

                }
                else{//SAME AS else if(HexInt(registers["H"])==1 ||HexInt(registers["H"])==0)
                       temp=registers["D"];
                       sum= HexInt(temp);
                       sum=sum-1;   //YAHA PE KUCH CONDITION HOGI? IF H==0  AND  L==0 => SUM==0 => WHEN SUM=SUM-1 =>SUM=-1  SO IS IT CORRECT?
                       temp=transform1(IntHex(sum));
                       registers["E"]=temp;
                       registers["D"]="00";
                  }

        }
}
}
