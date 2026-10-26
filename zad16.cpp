// Zadanie 16
// Program wczytuje do tablicy 10 liczb typu int i wyswietla ich srednia.
#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int tab[N];
    int suma = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
        suma += tab[i];
    }

    double srednia = (double)suma / N;
    cout << "Srednia: " << srednia << endl;
    return 0;
}
