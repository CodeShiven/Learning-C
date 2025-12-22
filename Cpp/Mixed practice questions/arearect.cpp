# include <iostream>
using namespace std;

int main () {

int length, breadth;
cout<<"Enter length:";
cin>>length;
cout<<"Enter breadth:";
cin>>breadth;

int area = length * breadth;
cout<<"area of rectangle is:"<<area<<endl;

int perimeter = 2 * (length + breadth);
cout<<"perimeter of rectangle is:"<<perimeter<<endl;


return 0;
}