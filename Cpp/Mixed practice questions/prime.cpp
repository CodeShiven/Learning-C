# include <iostream>
using namespace std;

int main (){

int num,j,count=0;
cout<<"Enter a number: ";
cin>>num;
j=1;
while(j<=num){
    if(num % j == 0)
    count++;
    j++;
}
if(count == 2){
    cout<<"Prime";
}else
    cout<<"Not Prime";

return 0;    
}
