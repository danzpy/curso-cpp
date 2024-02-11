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

string merged;


void merge(){
    
    for(int i = 0; i < word1.length() + word2.length(); i++){
        if (i % 2 == 0){
            cout << word1[index] << " apendado" << endl;
        }

        else{
            cout << word2[index] << " apendado" << endl;
        }
    }
    cout << merged << endl;
}

int main (){

    cout << "Digite a primeira string: ";
    cin >> word1;
    cout << "Digite a segunda string: ";
    cin >> word2;

    cout << "String1, String2 respectivamente: " << word1 << ", " << word2 << endl;
    merge();
    return 0;
}