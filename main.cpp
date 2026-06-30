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


cout << "\n>>> COMBATE 1: Emboscada do Drone!" << endl;
int danoNoDrone = calcularDano(heroiATQ, 5); 
ini1HP -= danoNoDrone;
cout << heroi << " disparou contra " << ini1 << " causando " << danoNoDrone << " de dano!" << endl;
mostrarStatus("INIMIGO", ini1, ini1HP, ini1ATQ);


cout << "\n>>> COMBATE 2: O Pirata do Espaco aparece!" << endl;
int danoBasePirata = calcularDano(heroiATQ, 10);
int danoFinalPirata = aplicarCritico(danoBasePirata, true); 
ini2HP -= danoFinalPirata;
cout << "CRITICO! " << heroi << " desferiu um golpe fatal em " << ini2 << " de " << danoFinalPirata << " HP!" << endl;
mostrarStatus("INIMIGO", ini2, ini2HP, ini2ATQ);

cout << "\n[SISTEMA]: Setor limpo. Void Runners vitoriosos!" << endl;
cout << "============================================" << endl;

    system("pause");
    return 0;
}
