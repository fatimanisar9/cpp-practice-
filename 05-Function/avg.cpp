#include<iostream>
using namespace std;

float average(int a, int b, int c, int d)
{
    return (a + b + c + d) / 4.0;
}

int main()
{
    int a, b, c, d;

    cout << "Enter 4 numbers: ";
    cin >> a >> b >> c >> d;

    cout << "Average = " << average(a, b, c, d);

    return 0;
}