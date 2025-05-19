#include <iostream>
using namespace std;
#include <iomanip> 

int main() {

    string female_employee;
    double salary;

    cout << "Type the name of an employee: ";
    getline (cin, female_employee);
    cout << "Type your salary: ";
    cin >> salary;
    cout << female_employee << endl;
    cout << salary << endl;
    cout << female_employee << " in the month of June, earns a salary of: " << salary << endl;

    return 0;
}
