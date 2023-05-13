#include <iostream>

using namespace std;

// Função que calcula o fatorial de um número
int fatorial(int n)
{
    int fat = 1;

    for (int i = 2; i <= n; i++)
    {
        fat *= i;
    }

    return fat;
}

int main()
{
    int n, num, fat;

    cout << "Digite um numero inteiro e positivo: ";
    cin >> n;

    cout << "Digite " << n << " numeros inteiros e positivos:\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "Digite o " << i << "o numero: ";
        cin >> num;

        fat = fatorial(num);

        cout << num << "! = " << fat << endl;
    }

    return 0;
}
