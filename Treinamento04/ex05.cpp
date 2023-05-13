#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double e = 1, fatorial = 1;

    cout << "Digite um valor inteiro e positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fatorial *= i;
        e += 1 / fatorial;
    }

    cout << "\nO valor de E para n = " << n << " é: " << fixed << setprecision(4) << e << endl;

    return 0;
}
