# include <iostream>
using namespace std;
int main() {

int n;
cout<<"Enter a number:";
cin>>n;
int i=2;
int sum = 0;

while (i<=n) {
	sum = sum + i;
	i = i + 2;
}
cout << "The Sum is: " << sum << endl;

return 0;
}










