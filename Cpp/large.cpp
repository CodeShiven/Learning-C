#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    //Ask the user to enter three numbers
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >>c;

    //Assume the first number is the largest
    int largest = a;

    //Compare the second number with the current largest
    if (b > largest) {
        largest = b;
    }

    //Compare the third number with the current largest
    if (c > largest) {
        largest = c;
    }

    //Print the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}