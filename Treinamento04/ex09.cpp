#include <iostream>

using namespace std;

int main() {
    int idade, total_pessoas = 0, total_mulheres = 0, total_homens = 0;
    char sexo;
    double media_idade = 0, media_mulheres = 0, media_homens = 0;

    while (true) {
        cout << "Digite a idade da pessoa: ";
        cin >> idade;

        if (idade <= 0) {
            break;
        }

        cout << "Digite o sexo da pessoa (f ou m): ";
        cin >> sexo;

        if (sexo != 'f' && sexo != 'm') {
            break;
        }

        total_pessoas++;
        media_idade += idade;

        if (sexo == 'f') {
            total_mulheres++;
            media_mulheres += idade;
        } else {
            total_homens++;
            media_homens += idade;
        }
    }

    if (total_pessoas == 0) {
        cout << "Nenhuma pessoa foi registrada." << endl;
    } else {
        media_idade /= total_pessoas;
        media_mulheres /= total_mulheres;
        media_homens /= total_homens;

        cout << "Média de idade de todas as pessoas: " << media_idade << endl;
        cout << "Média de idade das mulheres: " << media_mulheres << endl;
        cout << "Média de idade dos homens: " << media_homens << endl;
    }

    return 0;
}
