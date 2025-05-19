#include <iostream>
using namespace std;

int main() {

    float number;
    cout << "Enter a number: ";
    cin >> number;

    float doubleValue = number * 2;
    cout << "The double of " << number << " is " << doubleValue << endl;

    double third = number / 3;
    cout << "One-third of " << number << " is " << third << endl;


    return 0;
}