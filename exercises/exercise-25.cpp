#include <iostream>
using namespace std;

int main() {

    float a, b, c;

    cout << "Enter the first side lenght: "; 
    cin >> a;
    
    cout << "Enter the second side lenght: ";
    cin >> b;

    cout << "Enter the third side lenght: ";
    cin >> c;

    if (a < b + c &&
        b < a + c &&
        c < a + b
        ) {
        cout << "Congratulations! These segments can form a triangle.\n";

    } else {
        cout << "The provided segments cannot form a triangle.\n";


    }


    return 0;
}