#include <iostream>
#include <string>
#include <array>

using namespace std;

/*int main()
{

    string parola;
    cout << "inserisci una parola" << endl;
    cin >> parola;

    for (int i = 0; i < parola.length(); i++)
    {
        for (int j = i + 1; j < parola.length(); j++)
        {
            if (parola[i] != parola[j])
            {

                cout << "la parola è univoca" << endl;
            } else {
                cout<<"la parola non è univoca"<<endl;
            }


        }
    }
} esercizio senza funzione */

bool univoca(string parola)
{
    bool charDoppio[256] = {false};
    for (int i = 0; i < parola.length(); i++)
    {
        int parolaNonunivoca = (int)parola[i];
        if (charDoppio[parolaNonunivoca])
        {
            return false;
        }
        charDoppio[parolaNonunivoca] = true;
    }
    return true;
}
int main()
{
    string parola;
    cout << "inserisci una parola" << endl;
    cin >> parola;
    if (univoca(parola))
    {
        cout << "la parola è univoca" << endl;
    }
    else
    {
        cout << "la parola non è univoca" << endl;
    } 
}