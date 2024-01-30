/*
#include -> Import da biblioteca
<iostream> -> Biblioteca que trata fluxo de entrada e saída de dados (i:in, o:out, stream:fluxo)
int main() -> Função principal, onde será hospedado o programa
std -> Indicador de função padrão do c++
cout -> Comando para imprimir um output
endl -> Fim de linha (endline). Semelhante ao breakrow, faz com que uma linha seja pulada ao término da sentença.
const -> Declaração de uma constante.
int <var> -> Declara uma variável do tipo inteiro
bool <var> -> Declara uma variável do tipo booleana
cin -> Faz com que o usuário consiga "inputar" um valor.
*/

#include<iostream>

int main (){
    std::cout << "Bem vindo ao jogo da advinhação." << std::endl;

    const int NUMERO_SECRETO = 42;

    bool nao_acertou = true;
    int tentativas = 10;

    while (nao_acertou){

        int chute;
        std::cout << "Você deverá acertar o número escolhido pela máquina." << std::endl;
        std::cout << "Atualmente você possui " << tentativas << " tentativas restantes." << std::endl;
        std::cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou) {
            std::cout << "Parabéns, você acertou o número secreto!" << std::endl;
            nao_acertou = false;
        }

        else if (maior) {
            std::cout << "O chute foi maior do que o número escolhido. Tente novamente" << std::endl;
            tentativas -= 1;
        }

        else {
            std::cout << "O chute foi menor do que o número escolhido. Tente novamente" << std::endl;
            tentativas -= 1;
        }

    }

    std::cout << "Fim de jogo! (:" << std::endl;

}

/*
Em códigos extensos, onde serão importados muitas vezes a função padrão std,
é possível incluir o seguinte comando:

    using namespace std;

Com isso, não é necessário a utilização do std:: nas funções que a utilizam.


    int main (){
        cout << "Bem vindo ao jogo da advinhação." << endl;
    }
*/