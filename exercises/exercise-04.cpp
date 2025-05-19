#include <iostream>
using namespace std;

int main() {

    int num1, num2;

    cout << "Enter a value: " << endl;
    cin >> num1;
    cout << "Enter another value: " << endl;
    cin >> num2;

    int sum = num1 + num2;

    cout << "\nThe sum of " << num1 << " and " << num2 << " is " << sum;


    return 0;
}