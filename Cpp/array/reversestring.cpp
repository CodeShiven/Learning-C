# include <iostream>
using namespace std;

int main() {
    
    int size = 6;
char arr[]={'a','b','c','d','e','f'};
int start = 0;
int end = 5;

while (start < end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;

}
for (int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}



return 0;    
}