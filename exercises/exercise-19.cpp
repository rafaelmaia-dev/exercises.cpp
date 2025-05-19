#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    float score1, score2, average;

    cout << "How much did you score on first test?\n";
    cin >> score1;
    cout << "How much did you score on the second test?\n";
    cin >> score2;

    average = (score1 + score2) / 2;

    if (average >= 7) {
        cout << "The student has been approved\n";

    } else if (average >= 5) {
              cout << "Student needs to take a remedial exam\n";

    } else { 
            cout << "The student has failed\n";

    }

    return 0;
}