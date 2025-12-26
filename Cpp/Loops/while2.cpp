# include <iostream>
using namespace std;

int main() {

int num;
cout<<"Enter a number: ";
cin>>num;

int i = 1;
int sum = 0;

while(i<=num) {
    sum+=i;
    i++;
}
   cout<<"Sum is: "<<sum; 

return 0;    
}