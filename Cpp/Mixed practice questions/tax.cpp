# include <iostream>
using namespace std;

int main() {

int hoursWorked;
cout<<"Enter hoursWorked: ";
cin>>hoursWorked;
int payRate=500;
float paymentAmount=hoursWorked *payRate;
float taxRate = 5.0 / 100;

cout<<"Payment Amount is: "<<hoursWorked * payRate<<"$"<<endl;
cout<<"TaxPayable is: "<<paymentAmount * taxRate <<endl;


return 0;    
}