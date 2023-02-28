#include <iostream>
#include <string>
#include <array>

using namespace std;

int sequenza(int arrayInteri[], int grandezza)
{
    int contatore = 0;
    for (int i = 0; i < grandezza; i++)
    {
        if (arrayInteri[i + 1] > arrayInteri[i] && arrayInteri[grandezza-2] > arrayInteri[i] )
        {
            contatore += 1;
        }
        else
        {
            continue;;
        }
    }
    return contatore;
}
int main()
{
    int arrayInteri[] = {6, 7, 8, 9, 10};
    int grandezza = sizeof(arrayInteri) / sizeof(arrayInteri[0]);
    {
           if (sequenza(arrayInteri, grandezza))
        {

            cout << "sono presenti " << sequenza(arrayInteri, grandezza) << " sequenze nell'array" << endl;
        }
        else
        {
            cout << "non sono presenti sequenze" << endl;
        }
    }
}