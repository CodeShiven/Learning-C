# include <iostream>
using namespace std;

int main () {

int arr[7]={7,6,5,4,3,2,1};
int even=0,odd=0;

for (int i=0;i<7;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}
cout<<"Even="<<even<<" "<<"Odd="<<odd;



return 0;    
}