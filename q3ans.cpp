//Q.No. 3
//Write a program create employee class with members variable as EmpId,Name of Employee and Salary. For 10 Employees
//Print list of all employees.
//Print list of employee who got heights salary

#include<iostream>
using namespace std;

class Employee{
	private:
		string employ_name;
		float salary;
		static int generator_EmpId;
		int emp_Id;
		
	public:
		void get_empData(string employ_name,float salary){
		
			
			emp_Id = ++generator_EmpId;
			this -> employ_name = employ_name;
			this -> salary = salary; 
			
			
		}
		
		
		
		void diaplay_empData(){
			cout<<"\nEmployee Id= "<<emp_Id<<"\nEmployee name= "<<employ_name<<"\n salary"<<salary;
		}
		
		
		
		void highest_salary(float salary){
			
			
			
			cout<<"\nHighest salary is "<< salary;
			
			
		}
		
};

int Employee :: generator_EmpId = 202400; 

int main(){
	
	Employee emp[100];
	
	string employ_name;
	float salary;
	

	
	
	for(int i = 0;i<10;i++){
		
		cout<<"\nEnter name  for "<<i+1<<" "<<"Employee";
		getline(cin,employ_name);
		cout<<"\nEnter salary  for "<<i+1<<" "<<"Employee";
		cin>>salary;
//		cin>>emp[i].get_empData(employ_name,salary);
		emp[i].get_empData(employ_name,salary);
		
	}
	
		
		
	}
	
	
//	
//	float max = emp[0].salary;
//	for(int i=1;i<10;i++){
//		if(p1[i] > max){
//			max = emp[i].salary;
//		}
//		
//	}
//	highest_salary(max);
	
//	Employee(emp);
	
	
	
	
