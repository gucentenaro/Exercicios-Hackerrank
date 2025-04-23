#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, q;
    cin >> n >> q;  //lendo n(numero do array de tamanho variavel) e lendo q (numero de buscas)
    
    vector<vector<int>> arr(n); //vetor de vetores com n posicoes
    int resultado;
    
    for (int i=0; i<n; i++){
        int k;
        cin >> k;       //lendo o tamanho de cada vetor
        vector<int> temp(k);    //vetor temporario de tamanho k
        for(int j=0; j<k; j++){ //le os k nuneros
            cin >> temp[j];     //armazena no temporario
        }
        arr[i] = temp;  //iguala os vetores temp para cada arr[i]
    }
    
    for (int i=0; i<q; i++){    //o tanto de buscas
        int x, y; //para cada busca, vai ate o arr[x] na posicao y
        cin >> x >> y;
        resultado = arr[x][y];  //mostra o elemento da posicao y do vetor arr[x]
        cout << resultado <<endl;
    }    
    
    return 0;
}