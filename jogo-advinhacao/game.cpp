/*
#include -> import da biblioteca
<iostream> -> biblioteca que trata fluxo de entrada e saída de dados (i:in, o:out, stream:fluxo)
int main() -> função principal, onde será hospedado o programa
std -> indicador de função padrão do c++
cout -> comando para imprimir um output
endl -> Fim de linha (endline). Semelhante ao breakrow, faz com que uma linha seja pulada ao término da sentença.
int <var> -> declara uma variável do tipo inteiro
cin -> Faz com que o usuário consiga "inputar" um valor.
*/

#include<iostream>

int main (){
    std::cout << "Bem vindo ao jogo da advinhação." << std::endl;

    int numero_secreto = 42;
    std::cout << "O numero secreto é " << numero_secreto << ". Não conte para ninguém!" << std::endl;

    int chute;
    std::cout << "Você deverá acertar o número escolhido pela máquina." << std::endl;
    std::cin >> chute;
    std::cout << "Você chutou o número " << chute << "." << std::endl;

    if (chute == numero_secreto){
        std::cout << "Parabéns, você acertou o número secreto!" << std::endl;
    }

    else if (chute > numero_secreto){
        std::cout << "O chute foi maior do que o número escolhido. Tente novamente" << std::endl;
    }

    else if (chute < numero_secreto){
        std::cout << "O chute foi menor do que o número escolhido. Tente novamente" << std::endl;
    }

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