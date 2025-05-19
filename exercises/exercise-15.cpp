#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const int HOURS_PER_DAY = 8;
    const float HOURLY_RATE = 25.00;
    
    int daysWorked;
    float salary;

    cout << "Enter the number of days worked this month: ";
    cin >> daysWorked;

    salary = (HOURS_PER_DAY * HOURLY_RATE) * daysWorked;

    cout << fixed << setprecision(2);
    cout << "The employee's salary is: $ " << salary << endl;

    return 0;
}
