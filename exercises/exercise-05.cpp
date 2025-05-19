#include <iostream>
using namespace std;

int main() {

    string student;
    float test1, test2;
    
    cout << "Enter your score on the first test: " << endl;
    cin >> test1;
    cout << "Enter your score on the second test: " << endl;
    cin >> test2;

    int average = (test1 + test2) / 2;

    cout << "The average of the two scores is: " << average << endl;


    return 0;
}