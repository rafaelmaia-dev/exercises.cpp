#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    float car_speed, fine = 0;

    cout << "What is the speed of the car?\n";
    cin >> car_speed;

    if (car_speed > 80) { 
        fine = (car_speed - 80) * 5;
        
        cout << fixed << setprecision(2);
        cout << "You have been fined and will pay a fee of " << fine << " reais, and a charge of 5.00 reais will be applied." << endl;

    } else { 
       cout << "You are within the allowed limit.\n";
    }
                
    return 0;
}
