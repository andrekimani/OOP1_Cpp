#include <iostream>
#include <cmath>
using namespace std;

//Generation of class.

class employee{
	private:
		string name,occupation;
		int idno; 
    public:
//Generate input and output in class.
    	void input(){
			cout<<"PROVIDE FULL NAME: "<<endl;
			getline(cin,name); //This line gets all the data with space included.
			cout<<"PROVIDE ID NO: "<<endl;
			cin>>idno;
			cout<<"PROVIDE OCCUPATION: "<<endl;
			cin>>occupation;
		}
		void output(){
			cout<<endl;
			cout<<"FIRST NAME: "<<name<<endl;
			cout<<"ID NO: "<<idno<<endl;
			cout<<"Occupation: "<<occupation<<endl;
			
		}
		
};
int main(){
	employee zu_emp; //zu_emp as the object of the class employee
	zu_emp.input();
	zu_emp.output();
	return 0;
}