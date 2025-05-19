#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float km, ticket_price;
    const float short_trip_rate = 0.50, long_trip_rate = 0.45;

    cout << "Enter the distance you want to travel (in km): ";
    cin >> km;

    if (km <= 200) {
        ticket_price = km * short_trip_rate;
        
    } else {
        ticket_price = km * long_trip_rate;
    }

    cout << fixed << setprecision(2);
    cout << "The ticket price will be: R$ " << ticket_price << endl;


    return 0;
}
