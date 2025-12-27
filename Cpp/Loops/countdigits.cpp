# include <iostream>
using namespace std;

int main () {

int digit;
cout<<"Enter a Digit: ";
cin>>digit;

int count = 0;

for (int i = digit; i != 0; i = i/10){
    count ++;

}
cout<<count;

return 0;    
}