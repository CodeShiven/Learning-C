# include <iostream>
using namespace std;

int main () {

int n;             
cout<<"Enter a number:"<<endl;   // this part will give user's input 
cin>> n;                        // 

int i = 1;                   

while (i <= n) {
    cout<< i << endl;  
    i = i + 1;
}


return 0;
}