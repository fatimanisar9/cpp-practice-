#include <iostream>
using namespace std;

int main() {

    int num = 10;

    // REFERENCE
    // ref is another name (alias) of num
    int &ref = num;

    cout << "Value of num: " << num << endl;
    cout << "Value using reference: " << ref << endl;

    // POINTER
    // ptr stores the address of num
    int *ptr = &num;

    // DEREFERENCE
    // *ptr gives the value stored at the address
    cout << "Value using dereference: " << *ptr << endl;

    return 0;
}