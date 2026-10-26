// Zadanie 12
// Program wczytuje tablice dwuwymiarowa 5x3 i wypisuje sume wszystkich elementow.
#include <iostream>
using namespace std;

int main()
{
    const int WIERSZE = 5;
    const int KOLUMNY = 3;
    double tab[WIERSZE][KOLUMNY];
    double suma = 0;

    for (int i = 0; i < WIERSZE; i++)
    {
        for (int j = 0; j < KOLUMNY; j++)
        {
            cout << "Podaj element [" << i << "][" << j << "]: ";
            cin >> tab[i][j];
        }
    }

    for (int i = 0; i < WIERSZE; i++)
    {
        for (int j = 0; j < KOLUMNY; j++)
        {
            suma += tab[i][j];
        }
    }

    cout << "Suma wszystkich elementow tablicy: " << suma << endl;
    return 0;
}
