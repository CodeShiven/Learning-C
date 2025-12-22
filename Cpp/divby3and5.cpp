# include <iostream>
using namespace std;

int main () {

int num;
cout<<"Enter a number: ";
cin>> num;

if (num % 3 == 0 && num % 5 == 0) {
    cout<<"Divisible by both";
}
else {
    cout<<"Naaah";
}
return 0;
}