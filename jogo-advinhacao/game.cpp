/*
#include -> import da biblioteca
<iostream> -> biblioteca que trata fluxo de entrada e saída de dados (i:in, o:out, stream:fluxo)
int main() -> função principal, onde será hospedado o programa
std -> indicador de função padrão do c++
cout -> comando para imprimir um output
endl -> Fim de linha (endline). Semelhante ao breakrow, faz com que uma linha seja pulada ao término da sentença.
*/

#include<iostream>

int main (){
    std::cout << "Bem vindo ao jogo da advinhação." << std::endl;
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