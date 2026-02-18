# include <iostream>
using namespace std;

int sum (int a, int b){
    return a+b;
}
int main(){

int a,b;
cout<<"Enter a and b: ";
cin>>a>>b;

int result = sum(a,b);
cout<<"Sum is: "<<result;\


return 0;
}