#include <iostream>
using namespace std;

int main() {

    int year, age, current_year = 2025;

    cout << " Which year were you born?\n";
    cin >> year;

    age = current_year - year;

    if (age < 18) {
        cout << "You are under the age to serve in the military.\n";

    } else if (age == 18) {
        cout << "You are eligible to serve and need to check your status.\n";

    } else {  
        cout << "You have passed your enlistment time\n";

    }    

    return 0;
}