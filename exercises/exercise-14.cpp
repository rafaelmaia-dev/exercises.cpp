#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    float price, car = 90.00, km_rate = 0.20, kilometers = 1000;
    int days;
    string input;

    cout << "How many kilometers did you drive? \n";
    cin >> input;
    cout << "For how many days did you rent this car? \n";
    cin >> days;

    price = (car * days) + (kilometers * km_rate);

    cout << "Total price to pay is " << price << " reais. " << endl;

    return 0;
}
