#include <iostream>

using namespace std;

int main()
{
    // Usando a estrutura de repetição for
    cout << "Usando a estrutura de repetição for:\n";
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
            cout << i << " ";
    }
    cout << "\n\n";

    // Usando a estrutura de repetição while
    cout << "Usando a estrutura de repetição while:\n";
    int j = 1;
    while (j <= 100)
    {
        if (j % 2 == 1)
            cout << j << " ";
        j++;
    }
    cout << "\n\n";

    // Usando a estrutura de repetição do-while
    cout << "Usando a estrutura de repetição do-while:\n";
    int k = 1;
    do
    {
        if (k % 2 == 1)
            cout << k << " ";
        k++;
    } while (k <= 100);

    return 0;
}
