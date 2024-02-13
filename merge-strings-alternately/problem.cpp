/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order,
starting with word1. If a string is longer than the other, append the additional letters onto the end
of the merged string.

Return the merged string.

*/

#include <iostream>
#include <string>

using namespace std;

string word1;
string word2;

string merged = "";

void merge(){

    int tamanhoMaximo = max(word1.size(), word2.size());

    cout << tamanhoMaximo << endl;

    for (int i = 0; i < tamanhoMaximo; i++) {
        if (i < word1.size()) {
            merged += word1[i];
        }
        if (i < word2.size()) {
            merged += word2[i];
        }
    }

    cout << merged << endl;
}


int main (){

    cout << "Digite a primeira string: ";
    cin >> word1;
    cout << "Digite a segunda string: ";
    cin >> word2;

    merge();
    return 0;
}