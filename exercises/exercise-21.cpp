#include <iostream>
#include <string>
using namespace std;

int main() {

    int year;
    string bissext_year;

    cout << "Enter any year: \n";
    cin >> year;

    bissext_year = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? "Year is bissext" : "Year is not bissext";
    
    cout << bissext_year << endl;


    return 0;
}