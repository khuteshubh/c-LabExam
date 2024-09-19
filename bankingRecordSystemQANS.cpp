#include<iostream>
#include<fstream>
using namespace std;
//class BankRecord{
//	
//	void add_data(){
//		
//	}
//	
//}

int main(){
	string name,gender;
	float salary;
	
	ofstream out;
	out.open("bankRecord.txt");
	
	cout<<"\nEnter the name: ";
	getline(cin,name);
	
	cout<<"\nEnter the gender: ";
	cin>>gender;
	
	cout<<"\nEnter the salary: ";
	cin>>salary;
	

	
		
		
	
	
	
	
	out.close();
	cout<<"\n File created succes.....!";	
}
