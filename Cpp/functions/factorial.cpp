# include <iostream>
using namespace std;

int facto(int n) {
    if(n <= 1) {
        return 1;
    }
    n =  n * facto(n-1);
        return n;
    }
    
    int main() {
       cout<< facto(5)<<endl;


    return 0;
}