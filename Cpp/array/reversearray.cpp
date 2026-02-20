#include<iostream>
using namespace std;

int main(){
        int size=5;
        int arr[]={10,20,30,40,50};
        int start=0 , end=4;

        while (start<end)

        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        
        }
        for (int i=0; i<size;i++){
            cout<<arr[i]<<" ";
        }
    

    return 0;
}