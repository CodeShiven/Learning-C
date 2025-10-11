# include <iostream>   
using namespace std;   

int main() {

int n;  
cout<<"Enter a number :"; // first we took user's input till where user wants the sum; 
cin>>n;

int i = 1;     //we took i = 1 it will add after every count eg. i+1=2,i+2=3....so on. 
int sum = 0;            // sum will be zero before user's input so we'll take it as 0;

while (i <= n) {     // 1<= n ; n = user's input;  
    sum=sum+i;    // 0 = 0 + 1;    
    i = i+1;     // 1 = 1 + 1;  
}
cout<<"The sum is :"<<sum<<endl;// sum of 1-3= 6 ----> 1+2+3 = 6; 

return 0;
}