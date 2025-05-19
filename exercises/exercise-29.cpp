#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

    string employee;
    float salary, new_Salary;
    double years_Worked;

    cout << "What is your name?\n";
    getline (cin, employee);

    cout << "What is your current salary?\n";
    cin >> salary;

    cout << "How many years have you worked at this company?\n";
    cin >> years_Worked;

    

    if (years_Worked <= 3) {
        new_Salary = salary + (salary * 0.03);
        cout << fixed << setprecision(2);
        cout << "After the adjustment, your salary is " << new_Salary << endl;

    } else if (years_Worked > 3 && years_Worked < 10) {
              new_Salary = salary + (salary * 0.125);
              cout << fixed << setprecision(2);
              cout << "After the adjustment, your salary is " << new_Salary << endl;

    } else {
          new_Salary = salary + (salary * 0.20);
          cout << fixed << setprecision(2);
          cout << "After the adjustment, your salary is " << new_Salary << endl;
    }




    return 0;
}