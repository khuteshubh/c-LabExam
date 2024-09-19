//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use
//Default values for Pay_Rate Rs. 500 per hours)
//[Q.No 2 Marks 10 ] =======================================

#include<iostream>
using namespace std;
class Employee{
	private:
		string worker_name;
		float no_H_work;
		float pay_rate;
		float salary;
		
	public:
		Employee(float pay_rate = 500){
			
			
		}
		
		void get_worker_data(string worker_name,float no_H_work,float pay_rate){
			this -> worker_name = worker_name;
			this -> no_H_work = no_H_work;
			this -> pay_rate = pay_rate;
			
		}
		
		
		
		void display_salary(){
			float salary =  pay_rate * no_H_work ;
			
			cout<<"\nWorker name= "<<worker_name<<"\nNumber of hour work= "<<no_H_work<<"\npay rate per hour="<<pay_rate;
			cout<<"\n-----------------------------------";
			cout<<"\nworker salary is= "<<salary;
		}
};

int main(){
	string worker_name;
	float no_H_work;
	float pay_rate;
	
	Employee p1;
	
	cout<<"\nEnter the worker name: ";
	getline(cin,worker_name);
	
	cout<<"\nEnter the number of houre work: ";
	cin>>no_H_work;
	
	cout<<"\nEnter the pay rate per hour";
	cin>>pay_rate;
	
	p1.get_worker_data(worker_name,no_H_work,pay_rate);
	p1.display_salary();
	
	
	
	
	
}