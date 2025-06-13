#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Complex {
public:
    int a, b;


    //como nao se soma objetos personalizados, usa esse operador e os dois tipos que vc quer q ele some, assim quando + eh usado ele chama essa funcao
    Complex operator+(const Complex& other) {   //other eh outro num complexo q sera somado
        Complex result;
        result.a = a + other.a; //soma as partes reais
        result.b = b + other.b; //soma as partes imaginarias
        return result;
    }
};


//imprime o num complexo no formato certo, ent quando usar cout imprimira dessa maneira
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.a << "+i" << c.b;  //c eh o objeto
    return out;
}




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    Complex x, y, z;
    string s1, s2;


    //le os complexos como strings
    cin >> s1 >> s2;


    //converte a string para um char
    sscanf(s1.c_str(), "%d+i%d", &x.a, &x.b);
    sscanf(s2.c_str(), "%d+i%d", &y.a, &y.b);


    // Soma
    z = x + y;


    // Resultado
    cout << z << endl;
   
    return 0;
}