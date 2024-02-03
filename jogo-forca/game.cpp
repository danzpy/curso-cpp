#include <iostream>
#include <string>
#include <cctype> // Para usar a função "tolower()"
#include <map>
#include <vector>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
map <char, bool> chutou;
vector <char> chutes_errados;

bool verifica_letra(char chute){

    for (char letra : PALAVRA_SECRETA){
        if(toupper(chute) == toupper(letra)){
            return true;
        }
    }
    return false;
}

bool nao_acertou(){
    for (char letra: PALAVRA_SECRETA){
        if (!chutou[letra]){
            return true;
        }
    }
    return false;
}

int main (){

    cout << "Bem vindo ao jogo da forca. Você terá 6 chances para descobrir a palavra secreta.\n" << endl;

    bool nao_enforcou = true;

    int vidas = 6;

    while (nao_acertou() && nao_enforcou){

        for (char letra: PALAVRA_SECRETA){
            if (chutou[letra]){
                cout << letra << " ";
            }
            else {
                cout << "_ ";
            }
        }
        cout << endl;
        
        cout << "Tente advinhar uma letra presente na palavra secreta." << endl;
        char chute;
        cin >> chute;
        cout << endl;

        char chute_upper = toupper(chute);

        chutou[chute_upper] = true;

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
                chutes_errados.push_back(chute_upper);
            }
        cout << endl;
        }
        for (char letra: chutes_errados){
            cout << "\nChutes errados: " << letra << " ";
        }
        cout << endl;
    }
}