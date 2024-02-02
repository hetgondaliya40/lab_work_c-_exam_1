/*
2. Array Of Object (Bank Management System) Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) Search Record By A/C Number.
*/

#include<iostream>
using namespace std;

class bank {
	public :
		
		int ac_number;
		char ac_name[100];
		char ac_type[100];
		char ac_branch[100];
		int ac_balance;
		
		void banke(){
			cout<<"Enter A/c number"<<endl;
			cin>>ac_number;
			cout<<"Enter A/c name"<<endl;
			cin>>ac_name;
			cout<<"Enter A/c type"<<endl;
			cin>>ac_type;
			cout<<"Enter A/c branch"<<endl;
			cin>>ac_branch;
			cout<<"Enter A/c balance"<<endl;
			cin>>ac_balance;
			
			
			cout<<"A/C number is :"<<ac_number<<endl;
			cout<<"A/C name is :"<<ac_name<<endl;
			cout<<"A/C type is :"<<ac_type<<endl;
			cout<<"A/C branch is :"<<ac_branch<<endl;
			cout<<"A/C balance is :"<<ac_balance<<endl;
		}
};

int main(){
	bank b;
	
	b.banke();
}
