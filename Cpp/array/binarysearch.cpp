# include <iostream>
using namespace std;

int binarySearch(int arr[],int tar,int n){ // one array, one target, n- size of array
    int st=0, end=n-1;      
    while (st <= end){ 
        int mid= (st + end) /2;
    
        if (tar > arr[mid]){
            st= mid+1; // 2nd half
        }else if(tar < arr[mid]){
            end=mid-1; // 1st half
        }else{
            return mid;
        }
    
    }
    return -1;
    
}
int main() {

int arr1[]={5,12,18,25,37,49,63,72};
int n = 7;
int tar1=37;

cout<< binarySearch (arr1,tar1,n) <<endl;

return 0;
}