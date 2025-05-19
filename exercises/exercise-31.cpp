#include <iostream>
#include <string>
#include <cstdlib> // para rand() e srand()
#include <ctime>   // para time()
using namespace std;

int main() {

    srand(time(0)); // só precisa fazer isso uma vez, no início do main
    int indice = rand() % 3; // resultado será 0, 1 ou 2

    string opcoes[3] = {"pedra", "papel", "tesoura"};
    int i;
    string jogador;
    string computador = opcoes[indice];

    cout << "Jogue pedra, papel ou tesoura: \n";
    cin >> jogador;
    cout << "Computador jogou: " << computador << endl;


    if (jogador == computador) {
        cout << "Empate!" << endl;
    } else if (jogador == "pedra" && computador == "tesoura") {
        cout << "Voce ganhou do computador \n";
    } else if (jogador == "tesoura" && computador == "papel") {
        cout << "Voce ganhou do computador \n";
    } else if (jogador == "papel" && computador == "pedra") {
        cout << "Voce ganhou do computador \n";
    } else {
        cout << "Computador ganhou desta vez \n";
    }
    

    return 0;
}