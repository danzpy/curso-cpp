// "Importando o que será necessário para o programa". Também conhecido com "header file"
#include "main.hpp"

int main(){
    string line;

    // ofstream -> Cria e escreve em arquivos
    ofstream myfile("arquivo.txt");

    myfile << "Acabo de gerar um arquivo e estou digitando essa frase.";


    if (myfile.is_open()){
        myfile << "\nAdicionando mais uma linha\n";

        myfile.close();
    }
    
    else {
        cout << "Não foi possível adicionar essa linha";
    }

    // ifstream -> Le arquivos.
    ifstream myfile_read("arquivo.txt");

    if (myfile_read.is_open()){
        while(getline(myfile_read, line)){

            cout << line << endl;
        }
    }   myfile_read.close();
}