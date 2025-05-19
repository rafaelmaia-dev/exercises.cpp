#include <iostream>
using namespace std;

int main() {

    int num, prev, next;

    cout << "Enter a number: " << endl;
    cin >> num;

    // Correctly calculate the predecessor and successor
    prev = num - 1;
    cout << "The predecessor of " << num << " is: " << prev << endl;

    next = prev += 2;
    cout << "The successor of " << num << " is: " << next << endl;
   
    return 0;
}