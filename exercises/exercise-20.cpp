#include <iostream>
using namespace std;

int main() {

    int number, result;

    cout << "Enter a number: \n";
    cin >> number;

    result = number % 2;
    
    switch (result) {

           case 0:
                cout << "Number is even.\n";
                break;

           case 1:
                cout << "Number is odd.\n";
                break;
         
    }

    return 0;
}