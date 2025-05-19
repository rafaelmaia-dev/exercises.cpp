#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    
    double a, b, c;
    double delta;

    cout << "Enter the first value: " << endl;
    cin >> a;

    // Checks if "a" is different from zero
    if (a == 0) {
        cout << "The value of 'a' cannot be zero in a quadratic equation!" << endl;
        return 1; // Terminates the program with an error
    }

    cout << "Enter the second value: " << endl;
    cin >> b;
    cout << "\nEnter the third value:\n";
    cin >> c;

    delta = b * b - 4 * a * c;

    // Displays the value of Delta
    cout << "The value of Delta is: " << delta << endl;

    if (delta > 0) {
        cout << "There are two distinct roots" << endl;

    } else if (delta == 0) {
        cout << "\nThere is one real (double) root\n";

    } else {
        cout << "There are no real roots" << endl;
    }
    
    return 0;
}
