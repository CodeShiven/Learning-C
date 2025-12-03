# include <iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;

}
int main() {

    int result = add(7,9);
    cout<<"sum is: "<< result <<endl;
    int sum = add(9,5);
    cout << "sum is: "<<sum <<endl;
return 0;
}