#include <iostream>

using namespace std;

int main()
{
    int n, fibonacciAnterior = 0, fibonacciAtual = 1, fibonacciProximo;

    cout << "Digite o valor de n: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        fibonacciProximo = fibonacciAnterior + fibonacciAtual;
        fibonacciAnterior = fibonacciAtual;
        fibonacciAtual = fibonacciProximo;
    }

    cout << "\nO " << n << "º termo da série de Fibonacci é: " << fibonacciAtual << endl;

    return 0;
}
