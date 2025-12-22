# include <iostream>
using namespace std;

int main () {

int a, b;
cout << "Enter the value of a:<<a";
cin >> a;
cout << "Enter the value of b:<<b";
cin >> b;

if (a > b) {
	cout << "a is greater" << endl;
} else if (a < b) {
	cout << "b is greater" << endl;
} else {
	cout << "both are equal" << endl;
}
}