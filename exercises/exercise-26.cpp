#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter the first value: ";
    cin >> num1;
    
    cout << "Enter the second value: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The first value is greater.\n";

    } else if (num2 > num1) {
              cout << "The second value is greater.\n";

    } else {
          cout << "There is no greater number, both are equal.\n";
            
    }



    return 0;
}