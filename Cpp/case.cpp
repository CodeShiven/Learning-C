# include <iostream>
using namespace std;

int main() {

char ch;
cout<<"Enter your character:"<<endl;
cin>>ch;

	if (ch >= 'a' && ch <= 'z') {
cout<<"Character is lower case: "<<ch<<endl;    
	} else if (ch >= 'A' && ch <= 'Z') {
cout<<"Character is upper case: "<<ch<<endl;    
	} else if (ch >= '0' && ch <= '9') {
cout<<"Character is a numeric value: "<<ch<<endl;    
	} else {
cout << "Character is a special symbol: "<<ch <<endl;
	}

return 0;
}