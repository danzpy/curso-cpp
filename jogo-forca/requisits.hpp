#include <iostream>
#include <string>
#include <cctype> // Para usar a função "tolower()"
#include <map>
#include <vector>
#include <fstream> // Para ler arquivo .txt
#include <ctime> // Para usar a função "rand"
#include <cstdlib> // Para usar a função "rand"

using namespace std;

string PALAVRA_SECRETA = "";
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


int escolhe_numero(){
    //Inicializa a semente do gerador de números aleatórios, com base na data/horario atual.
    srand(time(NULL));

    // Divide um valor aleatório com base na semente encontrada, pelo número (range) definido e retorna o seu resto (%)
    const int N = 20;
    const int NUMERO_ESCOLHIDO = std::rand() % N;

    return NUMERO_ESCOLHIDO;
}


void sorteia_palavra(){
    ifstream myfile("palavras.txt");

    if (myfile.is_open()){
        int quantidade;

        myfile >> quantidade;

        int NUMERO_ESCOLHIDO = escolhe_numero();

        for (int i=0; i < quantidade; i += 1){
            string palavra;
            myfile >> palavra;

            if (i == NUMERO_ESCOLHIDO){
                PALAVRA_SECRETA = palavra;
            }            
        }

        myfile.close();
    }
}
