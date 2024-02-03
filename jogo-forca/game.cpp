#include <iostream>
#include <string>
#include <cctype> // Para usar a função "tolower()"

using namespace std;

const string PALAVRA_SECRETA = "Melancia";

bool verifica_letra(char chute){

    for (char letra : PALAVRA_SECRETA){
        if(tolower(chute) == tolower(letra)){
            return true;
        }
    }
    return false;
}

int main (){

    cout << "Bem vindo ao jogo da forca. Você terá 6 chances para descobrir a palavra secreta.\n" << endl;

    cout << PALAVRA_SECRETA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    string underscore_PALAVRA_SECRETA = "";

    for (int i = 1; i <= PALAVRA_SECRETA.length(); i += 1) {
        underscore_PALAVRA_SECRETA.append("_ ");
    }

    cout << underscore_PALAVRA_SECRETA << endl;

    int vidas = 6;

    while (nao_acertou && nao_enforcou){
        
        cout << "Tente advinhar uma letra presente na palavra secreta." << endl;
        char chute;
        cin >> chute;

        if (verifica_letra(chute)){
            cout << "Seu chute está correto!" << endl;            
        }

        else {
            vidas -= 1;

            if(vidas == 0){
                nao_enforcou = false;
                cout << "Suas vidas acabaram! O jogo acabou." << endl;
            }
            
            else{
                cout << "Seu chute está errado. Atualmente você possui " << vidas << " vidas." << endl;
            }

        }
        
    }
}