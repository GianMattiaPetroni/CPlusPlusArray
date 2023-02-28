#include <iostream>
#include <string>
#include <array>

using namespace std;
bool crescente(int arrayInteri[], int grandezza)
{
    bool cresc[128] = {false};
    for (int i = 0; i < grandezza; i++)
    {
        if (arrayInteri[i + 1] < arrayInteri[i])
        {
            return false;
            break;
        }
        else
        {
            return true;
            continue;
        }
    }
    return cresc;
}
int main()
{
    int arrayInteri[] = {1, 2, 3, 4, 5, 6};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    if (crescente(arrayInteri, grandezza))
    {
        cout << "i numeri selezionati sono in ordine crescente" << endl;
    }
    else
    {
        cout << "i numeri selezionati non sono in ordine crescente" << endl;
    }
}
