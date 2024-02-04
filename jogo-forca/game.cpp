/* Melhorias:

- Se inputado mais de uma letra, o programa permite.
*/

#include "requisits.hpp"

int main (){

    sorteia_palavra();

    cout << "Bem vindo ao jogo da forca. Você terá 6 chances para descobrir a palavra secreta.\n" << endl;

    while (nao_acertou() && nao_enforcou()){

        imprime_palavra();
        
        advinha_verifica();

        imprime_erros();

    }
}