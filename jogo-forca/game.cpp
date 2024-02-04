/* Melhorias:

- Se inputado mais de uma letra, o programa permite.
- Incluir mais palavras e sortear uma aleatória.

*/

#include "requisits.hpp"

int main (){

    cout << "Bem vindo ao jogo da forca. Você terá 6 chances para descobrir a palavra secreta.\n" << endl;

    while (nao_acertou() && nao_enforcou()){

        imprime_palavra();
        
        advinha_verifica();

        imprime_erros();

    }
}