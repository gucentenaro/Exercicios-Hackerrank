#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class pequeno{
    private:
    int n;
    public:
    pequeno(int length){
        n = length;
    }
    int tamanho(){
        return n;
    }
};


bool checagem(string username){
    bool validado = true;
    int n = username.length();
    if (n < 5){
        throw pequeno(n);   //joga o erro no codigo
    }
    for(int i = 0; i < n-1; i++){
        if (username[i] == 'w' && username[i+1] == 'w'){    //invalido se 2 w em seguida
            validado = false;
        }
    }
    return validado;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
       int t;   //numero de testes
    cin >> t;  
    while (t--) {   //repete t vezes
        string username;
        cin >> username;
        try {   //se ocorrer bem continua no codigo, se der erro vai direto pro catch para ler o que foi jogado no throw
            if (checagem(username)) {
                cout << "Valid" << endl;
            } else {
                cout << "Invalid" << endl;
            }
        } catch (pequeno p) {   //pega o erro jogado pelo throw
            cout << "Too short: " << p.tamanho() << endl;
        }
    }
   
    return 0;
}