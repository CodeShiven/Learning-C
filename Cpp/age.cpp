# include <iostream>
using namespace std;

int main() {

int age;
cout<<"Enter age:- ";
cin>> age;

if (age >= 18) {
cout<<"You are an adult and you can vote and drive also u can drink a little :)"<<endl;
}
if (age < 18 && age > 12) {
cout<<"You are not an adult so you cannot vote or drive also no drinking for u"<<endl;    
}
if (age < 12 && age >= 1) {
cout<<"Grow up u kiddo:)"<<endl;
}
if (age <= 0) {
cout<<"Get a life bro"<<endl;    
}
cout<<"Thank You"<<endl;

return 0;
}