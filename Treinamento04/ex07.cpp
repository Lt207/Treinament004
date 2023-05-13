#include <iostream>

using namespace std;

int main()
{
    int valor, maior = 0, menor = 0;

    do
    {
        cout << "Digite um valor inteiro e positivo (ou zero para encerrar): ";
        cin >> valor;

        if (valor < 0)
        {
            cout << "Valor invalido! Digite um valor positivo ou zero.\n";
        }
        else if (valor > 0)
        {
            if (maior == 0 && menor == 0)
            {
                maior = valor;
                menor = valor;
            }
            else
            {
                if (valor > maior)
                {
                    maior = valor;
                }
                else if (valor < menor)
                {
                    menor = valor;
                }
            }
        }

    } while (valor != 0);

    if (maior == 0 && menor == 0)
    {
        cout << "Nenhum valor valido foi digitado.\n";
    }
    else
    {
        cout << "Maior valor digitado: " << maior << endl;
        cout << "Menor valor digitado: " << menor << endl;
    }

    return 0;
}
