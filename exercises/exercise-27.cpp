#include <iostream>
using namespace std;

int main() {

    float score1, score2, average;

    cout << "Enter your first score: \n";
    cin >> score1;

    cout << "Enter your second score: \n";
    cin >> score2;

    average = (score1 + score2) / 2;

    if (average >= 7.0) {
        cout << "You have been approved!\n";

    } else if (average >= 5.0 && average <= 6.9) {
              cout << "You are on remedial exam.\n";

    
    } else {
           cout << "You have been disapproved.\n";

    }

    return 0;
}