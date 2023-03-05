#include <iostream>
#include <string>
#include <array>

using namespace std;
int maxValore(int arrayInteri[], int grandezza)
{
    int valoreMaggiore = 0;
    for (int i = 0; i < grandezza; i++)
    {
        if (arrayInteri[i] > arrayInteri[valoreMaggiore])
        {
            valoreMaggiore = i + 1;
        }
    }
    return valoreMaggiore;
}
int main()
{
    int arrayInteri[6] = {1, 2, 3, 4, 5, 6};

    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    int valoreMaggiore = maxValore(arrayInteri, grandezza);
    cout << "il valore maggiore al'interno dell'array è: " << valoreMaggiore << endl;
}