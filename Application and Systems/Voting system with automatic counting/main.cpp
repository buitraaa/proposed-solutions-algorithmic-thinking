#include <iostream>
#include "vote.h"
using namespace std;

int main() {
    int nVotantes;

    cout << "¿Cuántos votantes habrá? ";
    cin >> nVotantes;

    for(int i = 0; i < nVotantes; i++) {
        votacion();
        votar();
        cout << endl;
    }

    cout << "Resultados finales:\n";
    cout << "Mariana Varón: " << votomarv << " votos\n";
    cout << "Kevin Caro: " << votokevcaro << " votos\n";
    cout << "Santiago Batista: " << votobap << " votos\n";
    cout << "Voto en blanco: " << votoBlanco << " votos\n";

    return 0;
}
