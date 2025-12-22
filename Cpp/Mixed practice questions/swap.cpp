# include <iostream>
using namespace std;

int main() {

int a, b, temp;

//asking the user for two numbers he wanna swap
cout<<"Enter first number: ";
cin>> a;
cout<<"Enter second number: ";
cin>> b;

//Showing the numbers before swapping 
cout<<"Before swapping: " << endl;
cout<<"First number: " << a << endl; 
cout<<"Second number: " << b << endl;

//swapping using a temp variable
temp = a; //saving a in temp variable.
a = b; //putting value of b in a.
b = temp; // putting temp value(originally a) in b.

//Showing the numbers after swapping.
cout<<"After swapping: "<< endl;
cout<<"First number: " << a << endl;
cout<<"Second number: " << b << endl;



return 0;

}