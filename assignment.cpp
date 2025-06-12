#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int hrs,wage;
	double gross,net,tax,overtime;
	cout<<"Enter hours worked in a week:"<<endl;
	cin>>hrs;
	cout<<"Enter hourly wage :"<<endl;
	cin>>wage;
	
//Calculate overtime 	
	if(hrs>40){
	overtime=hrs-40;
	gross=(wage*40)+(overtime*wage*1.5);
	}
	else{
		gross= hrs*wage;
	}

//Generate taxes
	if (gross<=600){
		tax=gross*0.15;
	}
	else{
		tax= (600*0.5)+((gross-600)*0.2);
	}
	
//calculate net and provide output
	net=gross-tax;
	cout<<"Grosspay amount is: "<<gross<<endl;
	cout<<"Taxes amount is: "<<tax<<endl;
	cout<<"netpay amount is: "<<net<<endl;
	
}