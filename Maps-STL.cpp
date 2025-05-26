#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <map>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    int Q;      //numero de consultas
    cin >> Q;  


    map<string, int> m;//mapeia nome do aluno (string) para as notas (int)


    for (int i = 0; i < Q; ++i) {
        int type;   //operacao 1, 2 ou 3
        cin >> type;


        string name;
        cin >> name;


        if (type == 1) {    //adicionar nota
            int mark;
            cin >> mark;
            m[name] += mark;  //adiciona a nota no valor atual
           
        } else if (type == 2) { //apagar aluno
            m.erase(name);  //remove o aluno
           
        } else if (type == 3) {  //consulta a nota do aluno
            if (m.find(name) != m.end()) {  //se nao encontrar o nome devolve m.end (indicando que nao existe)
                cout << m[name] << endl;  //imprime nota
            } else {
                cout << 0 << endl;  //nao existe, automaticamente vai devolver zero se o nome nao foi encontrado
            }
        }
    }
    return 0;
}