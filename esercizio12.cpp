#include <iostream>
#include <string>
#include <array>

using namespace std;
int* elementiComuni(int arrayInteri[], int arrayInteridue[], int grandezza, int grandezzadue)
{
    int contatore = 0;
    for (int i = 0; i < grandezza; i++)
    {
        for (int j = 0; j < grandezzadue; j++)
        {
            if (arrayInteri[i] == arrayInteridue[j])
            {
                contatore++;
            }
        }
    }

    int arrayValoricomuni[contatore];
    for (int i = 0; i < contatore; i++)
    {
        for (int j = 0; j < grandezzadue; j++)
        {
            if (arrayInteri[i] == arrayInteridue[j])
            {
                arrayInteri[i] == arrayValoricomuni[contatore];
            }
        }
    }
    return arrayValoricomuni;
}
int main()
{
    int arrayInteri[5] = {1, 2, 3, 4, 5};
    int arrayInteridue[5] = {1, 3, 5, 7, 8};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    int grandezzadue = sizeof(arrayInteridue) / sizeof(arrayInteridue[0]);
    int* totale = elementiComuni(arrayInteri, arrayInteridue, grandezza, grandezzadue);
    cout << " gli elementi in comune di questi due array sono " << totale << endl;
}