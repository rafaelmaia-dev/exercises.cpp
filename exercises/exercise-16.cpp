#include <iostream>
using namespace std;

int main() {

    int cigarettesPerDay, yearsSmoked, daysLost, totalCigarettes, year = 365, minutesLost;

    cout << "How many cigarettes do you smoke per day?\n";
    cin >> cigarettesPerDay;
    cout << "For how many years have you been smoking?\n";
    cin >> yearsSmoked;

    totalCigarettes = cigarettesPerDay * (yearsSmoked * year);
    minutesLost = totalCigarettes * 10;
    daysLost = minutesLost / 1440;

    cout << "You will lose " << daysLost << " days of your life" << endl;

    return 0;
}
