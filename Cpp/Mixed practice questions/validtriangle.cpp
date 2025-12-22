# include <iostream>
using namespace std;

int main() {

int a, b, c;
cout<<"Enter a,b,c: ";
cin>>a>>b>>c;

if ( a + b < c ){
    cout<<"Valid Triangle";
}
    if (b + c > a)
    {
        cout<<"Valid";
    }
else {
    cout<<"Invalid";
}   
return 0;
}