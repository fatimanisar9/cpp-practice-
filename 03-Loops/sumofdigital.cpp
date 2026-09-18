#include <iostream>
using namespace std;
main()
{
    int n, rem,sum=0;
    cout << "Enter the number :";
    cin >> n;
    while (n != 0)
    {
        rem = n % 10;
        sum= sum+rem;
        n /= 10;
    }
    cout<<sum;
}