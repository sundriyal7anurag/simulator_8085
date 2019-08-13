#include"Datatypes.h"

void  checkMemory(){
		int ch;
		string mA;
		do{
			cout<<"enter 1 for checking memory"<<endl;
			cout<<"enter 0 for exit"<<endl;
			cin>>ch;
			switch(ch){
				case 1:
						cin>>mA;
						cout<<memory[mA]<<endl;
						break;
				default:
						break;

			}
		}while(ch!=0);
	}

