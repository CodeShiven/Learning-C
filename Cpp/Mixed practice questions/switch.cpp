# include <iostream>
using namespace std;

int main() {

int num1, num2;
char op;

cout <<"Enter First number: ";
cin>> num1;
cout <<"Enter Operation (+, -, *, /): ";
cin>> op;
cout <<"Enter Second number: ";
cin>> num2;

switch (op) {

case '+':
    cout<<"Sum is: "<<num1+num2<<endl;
    break;
case '-':
    cout<<"Diff is: "<<num1-num2<<endl;
    break;
case '*':
    cout<<"Product is: "<<num1*num2<<endl; 
    break;
case '/':
    cout<<"Result is: "<<num1/num2<<endl;
    break;
default:
    cout<<"Invalid operator"<<endl;    

}

return 0;
}