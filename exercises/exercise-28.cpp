#include <iostream>
using namespace std;

int main() {

    float width, length, property;

    cout << "What is the width of your lot (in meters)?\n";
    cin >> width;

    cout << "What is the length of your lot (in meters)?\n";
    cin >> length;

    property = width * length;

    cout << "The area of the land is " << property << " square meters" << endl;

    if (property > 500) {
        cout << "The land is classified as VIP.\n";

    } else if (property >= 100 && property <= 500) {
             cout << "The land is classified as MASTER.\n";

    } else {
           cout << "The land is classified as POPULAR.\n";

    }



    return 0;
}