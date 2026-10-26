// Zadanie 19
// Program wczytuje rozmiar tablicy i jej elementy, kopiuje tablice nr 1
// do tablicy nr 2 w odwroconej kolejnosci, a nastepnie wyswietla tablice nr 2.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Blad: wielkosc tablicy musi byc wieksza od 0." << endl;
        return 1;
    }

    int *tab1 = new int[n];
    int *tab2 = new int[n];

    cout << "Tablica 1" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "element " << i + 1 << " = ";
        cin >> tab1[i];
    }

    // kopiowanie w odwroconej kolejnosci
    for (int i = 0; i < n; i++)
    {
        tab2[i] = tab1[n - 1 - i];
    }

    cout << endl << "Tablica 2" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "element " << i + 1 << " = " << tab2[i] << endl;
    }

    delete[] tab1;
    delete[] tab2;
    return 0;
}
