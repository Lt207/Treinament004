#include <iostream>

using namespace std;

int main() {
    int x, y;
    long long result = 1;

    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << " elevado a " << y << " eh igual a " << result << endl;

    return 0;
}
