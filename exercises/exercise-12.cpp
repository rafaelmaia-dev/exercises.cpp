#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float product, discounted_price;

    cout << "Enter the product price:\n ";
    cin >> product;

    discounted_price = product - (product * 0.05);
    
    cout << fixed << setprecision (2);
    cout << "The promotional price is " << discounted_price << endl;

    return 0;
}
