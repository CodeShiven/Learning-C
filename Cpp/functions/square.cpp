# include <iostream>
using namespace std;

void square(int n){
    cout<<"Square is: "<<n * n;
}
int main(){
    int n;
    cout<<"Enter a num: ";
    cin>>n;

    square(n);
    return 0;
}