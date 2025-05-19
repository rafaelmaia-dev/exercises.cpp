#include <iostream>
using namespace std;

int main() {

    int year, age, current_year = 2025;

    cout << "In which year were you born?\n";
    cin >> year;

    age = current_year - year;
 
    if (age >= 16) {
        cout << "You are eligible to vote.\n";

    } else {
        cout << "You are not eligible to vote." << endl;

    }

    return 0;
}
