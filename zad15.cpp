// Zadanie 15
// Funkcja potega podnosi pierwszy argument (typ rzeczywisty) do potegi
// okreslonej przez drugi argument (typ int) i zwraca wynik typu rzeczywistego.
#include <iostream>
using namespace std;

double potega(double podstawa, int wykladnik)
{
    double wynik = 1;
    bool ujemny = wykladnik < 0;
    if (ujemny)
        wykladnik = -wykladnik;

    for (int i = 0; i < wykladnik; i++)
    {
        wynik *= podstawa;
    }

    if (ujemny)
        wynik = 1 / wynik;

    return wynik;
}

int main()
{
    double podstawa;
    int wykladnik;

    cout << "Podaj podstawe (liczba rzeczywista): ";
    cin >> podstawa;
    cout << "Podaj wykladnik (liczba calkowita): ";
    cin >> wykladnik;

    if (podstawa == 0 && wykladnik <= 0)
    {
        cout << "Blad: 0 do potegi " << wykladnik << " nie jest okreslone." << endl;
        return 1;
    }

    cout << podstawa << " ^ " << wykladnik << " = " << potega(podstawa, wykladnik) << endl;
    return 0;
}
