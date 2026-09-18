#include <iostream>
using namespace std;
main()
{
    int n, temp, rem, rev = 0;
    cout << "Enter the number :";
    cin >> n;
    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (temp == rev)
    {
        cout << "Palindrome number" << endl;
    }
    else
    {
        cout << "Not Palindrome number" << endl;
    }
}