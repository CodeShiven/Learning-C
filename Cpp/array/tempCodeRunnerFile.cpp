#include<iostream>
using namespace std;

int main(){
        int arr[5]={10,20,30,40,50};
        int temp, n=5, i, j;

        for(int i=0;i<n;i++){
            for(int j=4;j<n;j--){
                temp=arr[i];
                arr[i]=arr[j];