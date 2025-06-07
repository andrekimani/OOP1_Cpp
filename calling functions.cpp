#include  <iostream>
#include <cmath>
using namespace std;
//functions prototypes
int addition (int x, int y);
int multiplication (int x, int y);
int division(int x, int y);

//intrest question
double intrest(double p, double r, double t);
int main(){
	double p,r,t;
	double s_intrest;
	cout<<"Provide price"<<endl;
	cin>>p;
	cout<<"Provide rate"<<endl;
	cin>>r;
	cout<<"Provide time"<<endl;
	cin>>t;
	s_intrest=intrest(p,r,t);
	cout<<"the rate: "<<s_intrest<<endl;	
	
	//calling functions in main
	int a,b;
	int sum;
	int product;
	int divide;
	
	cout<<"Provide value for a: "<<endl;
	cin>>a;
	cout<<"Provide value for b: "<<endl;
	cin>>b;	
	sum= addition(a,b);
	divide= division(a,b);
	product= multiplication(a,b);
	
	cout<<"Sum is: "<<sum<<endl;
	cout<<"Product is: "<<product<<endl;
	cout<<"Division is: "<<divide<<endl;
    return 0;
}

//intrest function
double intrest(double p, double r, double t){
	return p*(r/100)*t;
}

//Calling functions.
int addition (int x, int y){
	return x+y;
}
int multiplication (int x, int y){
	return x*y;
}
int division(int x, int y){
	return x/y;
}





