#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double polegadaCentimetro = 2.54;

    cout << "Tabela de conversão de polegadas para centímetros:\n\n";
    cout << setw(10) << "Polegadas" << setw(15) << "Centímetros\n";
    cout << setfill('-') << setw(25) << "-" << setfill(' ') << endl;

    for (int i = 1; i <= 20; i++)
    {
        double centimetros = i * polegadaCentimetro;
        cout << setw(10) << i << setw(15) << fixed << setprecision(2) << centimetros << endl;
    }

    return 0;
}
