#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    int pari = 0;
    int dispari = 0;
    int arrayInteri[6];
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    for (int i = 0; i < grandezza; i++)
    {
        cout << "Inserisci un numero" << endl;
        cin >> arrayInteri[i];
        if (arrayInteri[i] % 2 == 0)
        {
            pari = arrayInteri[i] + pari;
        }
        else
        {
            dispari = arrayInteri[i] + dispari;
        }
    }
    for (int i = 0; i < grandezza; i++)
    {
        cout<<"----------------------------" << endl;
        cout << "la somma dei numeri pari è " << pari << endl;
        cout << "la somma dei numeri dispari è " << dispari << endl;
        break;
    }
}
