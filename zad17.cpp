// Zadanie 17
// Program wypelnia 10-elementowa tablice typu int kolejnymi potegami liczby 2
// (2^0, 2^1, ..., 2^9) i wyswietla ja na ekranie.
#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int tab[N];

    tab[0] = 1; // 2^0
    for (int i = 1; i < N; i++)
    {
        tab[i] = tab[i - 1] * 2;
    }

    for (int i = 0; i < N; i++)
    {
        cout << "2^" << i << " = " << tab[i] << endl;
    }
    return 0;
}
