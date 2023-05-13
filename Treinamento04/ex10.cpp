#include <iostream>

using namespace std;

int main() {
    int idade, cont_jovens = 0;
    double peso, altura, media_idades_time, media_alturas = 0, cont_jogadores = 0, cont_pesados = 0;

    for (int i = 1; i <= 5; i++) {
        media_idades_time = 0;

        for (int j = 1; j <= 11; j++) {
            cout << "Digite a idade do jogador " << j << " do time " << i << ": ";
            cin >> idade;

            cout << "Digite o peso do jogador " << j << " do time " << i << ": ";
            cin >> peso;

            cout << "Digite a altura do jogador " << j << " do time " << i << ": ";
            cin >> altura;

            if (idade < 18) {
                cont_jovens++;
            }

            media_idades_time += idade;
            media_alturas += altura;
            cont_jogadores++;

            if (peso > 80) {
                cont_pesados++;
            }
        }

        media_idades_time /= 11;

        cout << "Média de idade do time " << i << ": " << media_idades_time << endl;
    }

    media_alturas /= cont_jogadores;
    double porcentagem_pesados = (cont_pesados / cont_jogadores) * 100;

    cout << "Quantidade de jogadores com idade inferior a 18 anos: " << cont_jovens << endl;
    cout << "Média das alturas de todos os jogadores do campeonato: " << media_alturas << endl;
    cout << "Porcentagem de jogadores com mais de 80 quilos: " << porcentagem_pesados << "%" << endl;

    return 0;
}
