#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2; // we are taking 2 instead of 1 bcz obv 1 will divide that value also 1 is a prime no

    while (i < n)
    {

        if (n % i == 0)
        {
            cout << "not a prime number:" << i << endl;
        }
        else
        {
            cout << "prime number:" << i << endl;
        }
        i = i + 1;
    }

    return 0;
}