#include<iostream>


using namespace std;

class admin{
	
	protected : 
	char comp_name[20] = "Dad";
	int man_salary = 100;
	int emp_salary = 20;
	int total_staff = 3;
	private :
int total_revenue = 500;
	char can_terminate[20] = "Yes";
	
	void myAccess(){
			cout<<comp_name<<endl;
			cout<<man_salary<<endl;
			cout<<emp_salary<<endl;
			cout<<total_staff<<endl;
			cout<<total_revenue<<endl;
			cout<<can_terminate<<endl<<endl;
		}
};

class Manager : public admin{
	public : 
		void myAccess1(){
			cout<<comp_name<<endl;
			cout<<man_salary<<endl;
			cout<<emp_salary<<endl;
			cout<<total_staff<<endl<<endl;
	}
};
class employee : public Manager{
	public : 
		void myAccess2(){
			cout<<comp_name<<endl;
			cout<<emp_salary<<endl;
			cout<<total_staff<<endl<<endl;
	}
};
int main(){
	employee obj;
	obj.myAccess();
	obj.myAccess1();
	obj.myAccess2();
	
	return 0;
}
