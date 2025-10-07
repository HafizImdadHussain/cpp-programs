// Program: Check whether a number is even or odd

#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    cout << "\n==== Check Number is Even or Odd ====\n";
    int num;
    cout << "Enter number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Invalid! Please enter a positive integer." << endl;
    }
    else if (num % 2 == 0)
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }

    return 0;
}