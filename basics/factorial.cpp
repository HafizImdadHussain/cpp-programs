// Program: Factorial Finder

#include <iostream>
using namespace std;

int main()
{
    int num;
    int factorial = 1;

    cout << "===== Find Factorial =====\n";
    cout << "Enter number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        cout << "Factorial = " << factorial << endl;
    }

    return 0;
}
