#include <iostream>
using namespace std;

int main()
{

    int marks;
    cout << "Enter Marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "A Grade" << endl;
    else if (marks >= 80)
        cout << "B Grade" << endl;
    else if (marks >= 70)
        cout << "C Grade" << endl;
    else
        cout << "Jhatu sala" << endl;

    return 0;
}