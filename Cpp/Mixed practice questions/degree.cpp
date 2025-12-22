# include <iostream>
using namespace std;

int main () {

int temp;
cout<<"Enter Temperature: ";
cin>>temp;


if (temp >= 0 && temp <=15) {
    cout<<"Cold";
}
else if (temp > 15 && temp <= 30)
{
    cout<<"Warm";
}
else if (temp > 30)
{
    cout<<"Hot";
}


return 0;
}