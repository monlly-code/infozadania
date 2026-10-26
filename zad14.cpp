// Zadanie 14
// Program oblicza silnie liczby podanej przez uzytkownika.
// Obostrzenia: silnia istnieje tylko dla liczb calkowitych nieujemnych,
// 0! = 1, a wynik dla n > 20 nie miesci sie w typie unsigned long long.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe calkowita nieujemna: ";

    if (!(cin >> n))
    {
        cout << "Blad: to nie jest liczba calkowita." << endl;
        return 1;
    }

    if (n < 0)
    {
        cout << "Blad: silnia nie jest okreslona dla liczb ujemnych." << endl;
        return 1;
    }

    if (n > 20)
    {
        cout << "Blad: wynik jest zbyt duzy (maksymalnie 20!)." << endl;
        return 1;
    }

    unsigned long long silnia = 1; // 0! = 1 oraz 1! = 1
    for (int i = 2; i <= n; i++)
    {
        silnia *= i;
    }

    cout << n << "! = " << silnia << endl;
    return 0;
}
