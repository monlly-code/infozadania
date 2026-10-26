// Zadanie 11
// Program wczytuje do tablicy 10 liczb rzeczywistych i wypisuje sume wszystkich elementow.
#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    double tab[N];
    double suma = 0;

    for (int i = 0; i < N; i++)
    {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tab[i];
    }

    for (int i = 0; i < N; i++)
    {
        suma += tab[i];
    }

    cout << "Suma wszystkich elementow tablicy: " << suma << endl;
    return 0;
}
