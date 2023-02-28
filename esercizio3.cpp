#include <iostream>
#include <string>
#include <array>

using namespace std;

/* int main()
{
    int risultato = 0;
    int arrayInteri[6];
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    for (int i = 0; i < grandezza; i++)
    {
        cout << "Inserisci un numero" << endl;
        cin >> arrayInteri[i];
        risultato += arrayInteri[i];
    }

    cout << "la somma dei numeri inseriti nell'array è: " << risultato << endl;
} esercizio completo senza funzione */

int somma(int arrayInteri[], int grandezza)
{
    int risultato = 0;
    for (int i = 0; i < grandezza; i++)
    {
        risultato += arrayInteri[i];
    }

    return risultato;
}

int main()
{
    int arrayInteri[] = {1, 2, 3, 4, 5, 6};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    cout << "la somma dei numeri inseriti nell'array è: " << somma(arrayInteri, grandezza) << endl;
}
