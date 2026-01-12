# include <iostream>
using namespace std;

int main() {

int n;
cout<<"Enter a number: ";
cin>>n;
int count = 0;

for (; n !=0; n=n/10){
    count++;
}
cout<<"Number of digits: "<<count;


return 0;
}