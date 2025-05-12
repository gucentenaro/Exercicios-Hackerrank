#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    int N;  //elementos do vetor
    int remover;    //posicao do vetor pra remover
    int a, b;   //intervalo a ser removido
    int recebe; //digitado pelo usuario
   
    vector<int> vec;


    cin >> N;
   
    for(int i = 0; i < N; i++) {
        cin >> recebe;
        vec.push_back(recebe);   //numero lido adicionado no final do vetor
    }
   
    cin >> remover;
    cin >> a >> b;


    vec.erase(vec.begin() + (remover - 1));  //remove o elemento da posicao
    vec.erase(vec.begin() + (a - 1), vec.begin() + (b - 1));    //remove o intervalo [a,b), ou seja, remove a posicao do a ate uma antes da posicao do b, vai remover o intervalo das posicoes do vetor


    cout << vec.size() << endl;


    for(int i = 0; i < vec.size(); i++) {   //imprime o vetor resultante
        cout << vec[i] << " ";
    }


    return 0;
}