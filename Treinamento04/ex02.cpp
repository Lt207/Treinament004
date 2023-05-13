#include<iostream>
using namespace std;

int main(){
    int idade, soma=0;

    for(int i=1; i<=10; i++){

        cout << "Digite a idade da " << i << "º pessoa: \n";
        cin >> idade;

        if(idade < 18){
            soma++;
        }
    }
        cout << "A quantidade de pessoas menores de 18 anos sao: " << soma;


    return 0;
}
