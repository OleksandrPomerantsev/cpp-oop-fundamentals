#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
    int dia,mes,any;
    cout << "Entra la data inicial (dd mm aaaa): ";
    cin >> dia >> mes >> any;
    Data dataActual(any,mes,dia);
    int puntuacioTotal = 0;
    int dias;
    for(int i = 0; i < 5; i++){
    cout << "Entra els dies que vols avancar: ";
    cin >> dias;

        for(int j = 0; j < dias; j++){
            dataActual.avanca_un_dia();
        }

        int puntsMovi = 0;

        if(dataActual.es_cap_de_setmana())
            puntsMovi += 1;

        if(dataActual.es_ultim_dia_mes())
            puntsMovi += 3;

        if(dataActual.es_cap_de_setmana() && dataActual.es_ultim_dia_mes())
            puntsMovi += 2;

        if(dataActual.get_dia_setmana() == "dilluns")
            puntsMovi -= 2;

        if(dataActual.get_mes() == 1)
            puntsMovi -= 3;

        puntuacioTotal += puntsMovi;

        cout << puntsMovi << " punts: ";
        cout << dataActual.get_dia_setmana() << " "
             << dataActual.get_dia() << " de "
             << dataActual.get_mes_string() << " de "
             << dataActual.get_any() << endl;
    }
    cout << "Puntuacio total: " << puntuacioTotal << " ";

    if(puntuacioTotal >= 10)
        cout << "Nivell DeLorean";
    else if(puntuacioTotal <= 0)
        cout << "Nivell Space Cruiser";
    else
        cout << "Nivell Tardis";

    cout << endl;
    return 0;
}
