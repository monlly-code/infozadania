// Zadanie 13
// Program wypelnia tablice dwuwymiarowa 5x4 losowymi liczbami calkowitymi (1-100),
// wyswietla ja, a na koncu podaje sume wszystkich liczb pierwszych.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Sprawdza, czy liczba jest pierwsza
bool czyPierwsza(int n)
{
    if (n < 2)
        return false;
    for (int d = 2; d * d <= n; d++)
    {
        if (n % d == 0)
            return false;
    }
    return true;
}

int main()
{
    const int WIERSZE = 5;
    const int KOLUMNY = 4;
    int tab[WIERSZE][KOLUMNY];
    int suma = 0;

    srand(time(NULL));

    // wypelnienie tablicy
    for (int i = 0; i < WIERSZE; i++)
    {
        for (int j = 0; j < KOLUMNY; j++)
        {
            tab[i][j] = rand() % 100 + 1;
        }
    }

    // wyswietlenie tablicy
    cout << "Tablica 5x4:" << endl;
    for (int i = 0; i < WIERSZE; i++)
    {
        for (int j = 0; j < KOLUMNY; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }

    // suma liczb pierwszych
    for (int i = 0; i < WIERSZE; i++)
    {
        for (int j = 0; j < KOLUMNY; j++)
        {
            if (czyPierwsza(tab[i][j]))
                suma += tab[i][j];
        }
    }

    cout << "Suma liczb pierwszych w tablicy: " << suma << endl;
    return 0;
}
