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
#include <cstdlib>
#include <ctime>

int main (){
    std::cout << "Bem vindo ao jogo da advinhação." << std::endl;

    //Inicializa a semente do gerador de números aleatórios, com base na data/horario atual.
    std::srand(std::time(NULL));

    // Divide um valor aleatório com base na semente encontrada, pelo número (range) definido e retorna o seu resto (%)
    const int N = 51;
    const int NUMERO_SECRETO = std::rand() % N;

    bool acaba = false;
    int tentativas = 0;
    
    std::cout << "Escolha o nível de dificuldade! F para facil, M para médio e D para difícil." << std::endl;
    char dificuldade;
    std::cin >> dificuldade;
    
    if (dificuldade == 'F'){    
        tentativas += 15;
    }

    else if (dificuldade == 'M'){
        tentativas += 10;
    }

    else {
        tentativas += 5;
    }

    while (!acaba){

        if (tentativas == 0){
            std::cout << "Suas vidas acabaram ):" << std::endl;
            std::cout << "O número escolhido era " << NUMERO_SECRETO << "." << std::endl;
            acaba = true;
        }

        else {
            std::cout << "Atualmente você possui " << tentativas << " tentativas restantes." << std::endl;
            std::cout << "Você deverá acertar o número escolhido pela máquina." << std::endl;

            int chute;
            std::cin >> chute;


            bool acertou = chute == NUMERO_SECRETO;
            bool maior = chute > NUMERO_SECRETO;

            if (acertou) {
                std::cout << "Parabéns, você acertou o número secreto!" << std::endl;
                acaba = true;
            }

            else if (maior) {
                std::cout << "O chute foi maior do que o número escolhido." << std::endl;
                tentativas -= 1;
            }

            else {
                std::cout << "O chute foi menor do que o número escolhido." << std::endl;
                tentativas -= 1;
            }
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