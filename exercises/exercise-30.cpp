#include <iostream>
#include <iomanip>
using namespace std;

void triangleType(float a, float b, float c);

int main() {

    float a, b, c;

    cout << "Enter the length of the first side: "; 
    cin >> a;
    
    cout << "Enter the length of the second side: ";
    cin >> b;

    cout << "Enter the length of the third side: ";
    cin >> c;

    if (a < b + c &&
        b < a + c &&
        c < a + b) {

        cout << "Congratulations! These segments can form a triangle.\n";
        triangleType(a, b, c);
    
    } else {
        cout << "The provided segments cannot form a triangle.\n";
    }

    return 0;
}

void triangleType(float a, float b, float c) {
            
    if (a == b && b == c) {
        cout << "Equilateral triangle: all sides are equal.\n";

    } else if ((a == b && a != c) || 
               (a == c && a != b) || 
               (b == c && b != a)) {
        cout << "Isosceles triangle: two sides are equal.\n";

    } else {
        cout << "Scalene triangle: all sides are different.\n";
    }
}
 