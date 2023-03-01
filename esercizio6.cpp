#include <iostream>
#include <string>
#include <array>

using namespace std;
int main()
{
    int arrayInteri[6] = {3, 2, 5, 1, 4, 6};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    int numerodiPari = 0;

    for (int i = 0; i < grandezza; i++)
    {
        if (arrayInteri[i] % 2 == 0)
        {
            numerodiPari += 1;
        }
    }
    int arraynumeriPari[numerodiPari];
    int contatore = 0;
    for (int j = 0; j < grandezza; j++)
    {
        if (arrayInteri[j] % 2 == 0)
        {
            arraynumeriPari[contatore] = arrayInteri[j];
            contatore++;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < contatore; i++)
    {
        cout << arraynumeriPari[i] << endl;
    }
}

