#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    float distanceM;

    cout << "Enter a distance in meters: ";
    cin >> distanceM;

    double km, hm, dam, dm, cm, mm;

    km = distanceM / 1000;
    hm = distanceM / 100;
    dam = distanceM / 10;
    dm = distanceM * 10;
    cm = distanceM * 100;
    mm = distanceM * 1000;

    cout << "The distance of " << distanceM << " corresponds to: " << km << "\n" << hm << "\n" << dam << "\n" << dm << "\n" << cm << "\n" << mm;
 




    





    return 0;
}