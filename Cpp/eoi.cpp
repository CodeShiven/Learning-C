# include <iostream>
using namespace std;

int main() {

int num;
cout<<"Enter an integer:- ";
cin>> num;

//checking if the num is even or odd by if-else statement:
if (num % 2 == 0) {
    cout<<"number is even:- "<<num<<endl;
   } else {
    cout<<"number is odd:- "<<num<<endl;  
   }

return 0;
}