# include <iostream>
using namespace std;

int main () {

int sum=0;

int num;
cout<<"Enter num: ";
cin>>num;

for(int i=0; i<=num; i++) {
    sum = sum + i;
}

cout<<sum;

return 0;    
}