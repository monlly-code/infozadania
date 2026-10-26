// Zadanie 20
// Program sprawdza, czy podana liczba calkowita jest dodatnia, ujemna czy rowna 0.
#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (liczba > 0)
        cout << "Liczba " << liczba << " jest dodatnia." << endl;
    else if (liczba < 0)
        cout << "Liczba " << liczba << " jest ujemna." << endl;
    else
        cout << "Liczba jest rowna 0." << endl;

    return 0;
}
