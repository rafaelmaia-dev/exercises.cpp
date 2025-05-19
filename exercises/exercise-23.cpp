#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm> // Necessário para transformar a string em minúsculas
using namespace std;

int main() {

    string name;
    string gender;
    float product, discount_F = 0.13, discount_M = 0.05;
    float final_price;
    
    cout << "What is your name?\n";
    getline(cin, name);
    cout << "What is your gender?\n";
    cin >> gender;

    // Convertendo a entrada para minúsculas
    transform(gender.begin(), gender.end(), gender.begin(), ::tolower);

    cout << "Enter the price of your product: \n";
    cin >> product;

    if (gender == "f" || gender == "female") {
        final_price = product - (product * discount_F);
        cout << fixed << setprecision(2);
        cout << "You have won a discount of " << final_price << endl;
  
    } else if (gender == "m" || gender == "male") {
        final_price = product - (product * discount_M);
        cout << fixed << setprecision(2);
        cout << "You have won a discount of: " << final_price << endl;
  
    } else {
        cout << "Invalid gender input." << endl;
    }

    return 0;
}
