#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// Macros
#define FUNCTION(name, op) void name(int &current, int candidate) { if (!(current op candidate)) current = candidate; } //a funcao so atualiza "current" for maior ou menor, depende do operador


#define foreach(v, i) for (size_t i = 0; i < v.size(); ++i)  // para arrumar o for corretamente


#define io(v) cin >> v  //para ler um valor corretamente


#define INF 100000000


#define toStr(S) #S


//funcoes geradas pelas macros
FUNCTION(minimum, <) //troca o valor se for menor ou igual
FUNCTION(maximum, >) //troca o valor se for maior ou igual


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    int n;
    cin >> n;
    vector<int> v(n);
   
    foreach(v, i) {
        io(v[i]);
    }


    int mn = INF;   //inicializa o minimo com um valor bem grande, para garantir que os valores serao menores
   
    int mx = -INF;  //inicializa o maximo com um valor bem pequeno, para garantir que os valores serao maiores


    foreach(v, i) {  //atualiza mx e mn usando o for definido antes
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }


    cout << "Result = " << mx - mn << endl;
   
    return 0;
}