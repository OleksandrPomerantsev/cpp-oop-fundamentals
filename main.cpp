#include <iostream>
#include "Punt2D.h"
using namespace std;

int main()
{
    double puntX, puntY;
    char resposta;
    cout << "Entra les coordenades x i y del punt inicial: ";
    cin >> puntX >> puntY;
    Punt2D primer(puntX,puntY);
    Punt2D anterior = primer;
    Punt2D mesProper = primer;
    double minDist = primer.distancia_origen();
    double distanciaTotal = 0.0;

    cout << "Vols entrar un nou punt? (s/n):";
    cin >> resposta;
    while (resposta == 's'){
        cout << "Entra les coordenades x i y d'un nou punt: ";
        cin >> puntX >> puntY;
        Punt2D actual(puntX,puntY);
        distanciaTotal += anterior.distancia(actual);

        double dOrigen = actual.distancia_origen();
        if(dOrigen < minDist){
            minDist = dOrigen;
            mesProper = actual;
        }

        anterior = actual;

        cout << "Vols entrar un nou punt? (s/n):";
        cin >> resposta;
    }
    if(!primer.es_igual(anterior)){
        distanciaTotal += anterior.distancia(primer);
    }
    cout << "Distancia trajecte = " << distanciaTotal << endl;
    cout << "Punt mes proper a l'origen de coordenades: ";
    mesProper.escriure();
    cout << endl;
    cout << "Distancia entre l'origen i el punt mes proper = " << minDist << endl;
    return 0;
}
