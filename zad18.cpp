// Zadanie 18
// Program przelicza temperature w stopniach Fahrenheita na stopnie Celsjusza.
// Wzor: C = (F - 32) * 5 / 9
#include <iostream>
using namespace std;

int main()
{
    double fahrenheit;
    cout << "Podaj temperature w stopniach Fahrenheita: ";
    cin >> fahrenheit;

    double celsjusz = (fahrenheit - 32) * 5.0 / 9.0;

    cout << fahrenheit << " F = " << celsjusz << " C" << endl;
    return 0;
}
