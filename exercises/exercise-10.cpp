#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    double width, height, area, paint;

    cout << "What is the width of the wall? " << endl;
    cin >> width;
    cout << "What is the height of the wall?\n";
    cin >> height;

    area = width * height;
    paint = area / 2;

    cout << fixed << setprecision(2);  // Formatting to two decimal places
    cout << "The area to be painted is " << area << " square meters" << endl;
    cout << "The amount of paint needed for the job is " << paint << " liters\n";

    return 0;
}
