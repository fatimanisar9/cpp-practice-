#include <iostream>
using namespace std;

int main() {

    int marks = 75;

    // Check if marks are 80 or above
    if (marks >= 80) {
        cout << "Grade A";
    }
    
    // Check if marks are 60 or above
    else if (marks >= 60) {
        cout << "Grade B";
    }
    
    // Runs if all conditions are false
    else {
        cout << "Grade C";
    }

    return 0;
}