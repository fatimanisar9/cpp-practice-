#include <iostream>
using namespace std;

int main() {

    int age = 16;
    // if → condition true ho to chalega.
    // else → condition false ho to chalega.

    // Check if age is 18 or greater
    if (age >= 18) {
        cout << "You are eligible to vote.";
    }
    else {
        // Runs when the condition is false
        cout << "You are not eligible to vote.";
    }

    return 0;
}