# include <iostream>
using namespace std;

int main() {

int evenSum=0;
int oddSum=0;

for(int i = 50; i<=150; i++){
    if(i%2==0){
        evenSum+=i;
    }else{
        oddSum+=i;
    }
}

cout<<evenSum<<endl;
cout<<oddSum<<endl;

return 0;    
}