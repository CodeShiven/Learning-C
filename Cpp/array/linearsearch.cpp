# include <iostream>
using namespace std;

int main () {

int arr[5]={12,14,15,32,11};
int key = 32;
bool found=false;

for(int i=0; i<5; i++ ){
    if(arr[i]==key){
        found=true;
    }
}
if(found){
    cout<<"Element Found";
}
else{
    cout<<"Element not found";
}


return 0;    
}