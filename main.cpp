#include <iostream>
#include "engine.h"

using namespace std;

int main() {
    string heroi = "Capitao Godzin";
    int heroiHP = 150, heroiATQ = 35;

    string ini1 = "Drone Mutante";
    int ini1HP = 60, ini1ATQ = 15;

    string ini2 = "Pirata do Espaco";
    int ini2HP = 90, ini2ATQ = 25;

    cout << "--- VOID RUNNERS: INITIALIZING SYSTEM ---" << endl;
    mostrarStatus("HEROI", heroi, heroiHP, heroiATQ);
    mostrarStatus("INIMIGO", ini1, ini1HP, ini1ATQ);
    mostrarStatus("INIMIGO", ini2, ini2HP, ini2ATQ);

    system("pause");
    return 0;
}
