#include <iostream>
#include <string>
#include <array>

using namespace std;

/*int main()
{
    int risultatomax = 0;
    int arrayInteri[6];
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    for (int i = 0; i < grandezza; i++)
    {
        cout << "Inserisci un numero" << endl;
        cin >> arrayInteri[i];
        if (arrayInteri[i] > risultatomax)
        {
           risultatomax = arrayInteri[i];
        }
    }
    cout << "il numero più grande tra quelli inseriti nell'array è: " << risultatomax << endl;
} esercizio completato senza funzione */

int piuGrande(int arrayInteri[], int grandezza)
{
    int risultatomax = arrayInteri[0];
    for (int i = 0; i < grandezza; i++)
    {
        if (arrayInteri[i] > risultatomax)
        {
            risultatomax = arrayInteri[i];
        }
    }
    return risultatomax;
}
int main()
{
    int arrayInteri[] = {1, 2, 3, 4, 5, 6};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    cout << "il numero più grande tra quelli inseriti nell'array è: " << piuGrande(arrayInteri, grandezza) << endl;
}