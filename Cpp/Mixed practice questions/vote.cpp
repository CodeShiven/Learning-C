# include <iostream>
using namespace std;

int main () {

int age;
cout<<"Enter your age:-"<<endl;
cin>>age;

if ( age >= 18 ) {
    cout<<"Eligible For Voting"<<endl;
}
else {
    cout<<"Not Eligible For Voting"<<endl;
}
return 0;
}