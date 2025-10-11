#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter Year: ";
    cin>>year;
    

    if (year % 400 == 0) {                  
        cout << "Leap Year\n";             //  These are the basic conditions to check //
    } else if (year % 100 == 0) {         //   if the given year is leap year or not! //
        cout << "Not a Leap Year\n";     //    <--------<                            //                      
    } else if (year % 4 == 0) {             
        cout << "Leap Year\n";         
    } else {
        cout << "Not a Leap Year\n";
    }

    return 0;
}
