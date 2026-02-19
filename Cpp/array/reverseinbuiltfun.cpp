# include <iostream>
# include <algorithm>
using namespace std;

int main() {

int arr[100];
int size = 6;
cout<<"Enter array elements: ";
for(int i=0; i<6 ; i++){
    cin>>arr[i];
}
int start = 0;
int end = size - 1;

for (int i = 0; i<size/2;i++){
    swap(arr[i],arr[size-1-i]);
}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;    
}
