#include <iostream>
#include <string>
#include <cctype> // Para usar a função "tolower()"
#include <map>
#include <vector>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";
int vidas = 6;
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
    cout << "Parabéns, você conseguiu! A palavra era: " << PALAVRA_SECRETA << endl;
    return false;
}

bool nao_enforcou(){
    if(vidas == 0){
        cout << "Suas vidas acabaram! O jogo acabou. A palavra era: " << PALAVRA_SECRETA << endl;
        return false;
    }
    return true;
}

void imprime_palavra(){
    for (char letra: PALAVRA_SECRETA){
        if (chutou[letra]){
            cout << letra << " ";
        }
        else {
            cout << "_ ";
        }
    }
    cout << endl;
}

void advinha_verifica(){
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
        
        cout << "Seu chute está errado. Atualmente você possui " << vidas << " vidas." << endl;
        chutes_errados.push_back(chute_upper);
        
    cout << endl;
    };
}

void imprime_erros(){
    for (char letra: chutes_errados){
        cout << "\nChutes errados: " << letra << " ";
    }
    cout << endl;
}
