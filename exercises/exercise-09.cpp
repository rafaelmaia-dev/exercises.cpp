#include <iostream>
using namespace std;
#include <iomanip>

int main() {

    float R = 3.45;
    float reais, dollars;
 
    cout << "How much money do you have in your wallet? " << endl;
    cin >> reais;

    dollars = reais / R;
    
    cout << fixed << setprecision (2);
    cout << "You can buy this amount in " << dollars << endl;


    return 0;
}