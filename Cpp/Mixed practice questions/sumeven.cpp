# include <iostream>
using namespace std;
int main() {

int n;                        //user's input till where he want the sum of even numbers
cout<<"Enter a number:";
cin>>n;

int i=2;                        
int sum = 0;                  // in the starting the sum will be zero obviously!

while (i <= n) {             
	sum = sum + i;
	i = i + 2;
}
cout << "The Sum is: " << sum << endl;

return 0;
}










