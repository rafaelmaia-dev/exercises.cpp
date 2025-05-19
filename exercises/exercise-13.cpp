#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float salary, new_salary;

    cout << "Enter the employee's current salary: \n";
    cin >> salary;

    new_salary = salary + (salary * 0.15);

    cout << "The employee's new salary is " << new_salary << endl;

    return 0;
}
