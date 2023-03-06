#include <iostream>
#include <string>
#include <array>

using namespace std;

int sequenza(int arrayInteri[], int grandezza)
{
    int contatore = 0;
    for (int i = 0; i < grandezza; i++)
    {
        if (arrayInteri[i + 1] > arrayInteri[i])
        {
            continue;
        }
        else
        {
            contatore += 1;
        }
    }

    return contatore;
}
int main()
{
    int arrayInteri[] = {1, 5, 9, 3, 2};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    if (sequenza(arrayInteri, grandezza) == 0)
    {
        cout << "non sono presenti sequenze nell'array";
    }
    else if (sequenza(arrayInteri, grandezza) == 1)
    {
        cout << "è presente una sola sequenza nell'array" << endl;
    }
    else
    {
        cout << "sono presenti " << sequenza(arrayInteri, grandezza) << " sequenze nell'array" << endl;
    }
}
