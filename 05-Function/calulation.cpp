#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b, choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";

    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Answer = " << add(a, b);
    }
    else if(choice == 2)
    {
        cout << "Answer = " << sub(a, b);
    }
    else if(choice == 3)
    {
        cout << "Answer = " << mul(a, b);
    }
    else if(choice == 4)
    {
        cout << "Answer = " << divi(a, b);
    }
    else
    {
        cout << "Invalid Choice";
    }

    return 0;
}