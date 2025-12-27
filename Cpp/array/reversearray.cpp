#include<iostream>
using namespace std;

int main(){
        int arr[5]={10,20,30,40,50};
        int start=0 , end=4;

        while (start<end)

        {
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        
        }
        


    return 0;
}