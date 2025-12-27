# include <iostream>
using namespace std;

int main () {

int n;
cout<<"Enter a number: ";
cin>>n;

int sum = 0;

for (; n>0; n=n/10){
    sum=sum+n%10;

}

cout<<sum;




return 0;    
}