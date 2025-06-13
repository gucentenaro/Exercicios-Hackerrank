#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class A {
protected:  //Acessivel por classes derivadas (heranca)
    void func(int &val) {
        val *= 2;   //multiplica o valor por 2
        callA++;    //saber quantas vezes func da classe A foi chamada
    }
private:
    static int callA;   //static pq depende da classe e nao do objeto
public:
    static int getA() {
        return callA;   //retornar o valor para a main
    }  
};
int A::callA = 0;   //variavel callA da classe A


class B {
protected:
    void func(int &val) {
        val *= 3;   //multiplicar o valor por 3
        callB++;    //saber quantas vezes func da classe B foi chamada
    }
private:
    static int callB;
public:
    static int getB() {
        return callB;
    }
};
int B::callB = 0;


class C {
protected:
    void func(int &val) {
        val *= 5;   //multiplicar o valor por 5
        callC++;    //saber quantas vezes func da classe C foi chamada
    }
private:
    static int callC;
public:
    static int getC() {
        return callC;
    }
};
int C::callC = 0;


//classe D herda A, B e C
class D : public A, public B, public C {
    int val;


public:
    //construtor
    D() {
        val = 1;    //neutro na multiplicacao
    }


    // Atualiza val ate chegar em new_val, chamando as func de A, B e C
    void update_val(int new_val) {
        while (new_val % 2 == 0) {
            A::func(val);
            new_val /= 2;
        }
        while (new_val % 3 == 0) {
            B::func(val);
            new_val /= 3;
        }
        while (new_val % 5 == 0) {
            C::func(val);
            new_val /= 5;
        }
    }


    //impressao dos resultados
    void check(int new_val) {
        update_val(new_val);
        cout << "Value = " << val << endl;
        cout << "A's func called " << getA() << " times" << endl;
        cout << "B's func called " << getB() << " times" << endl;
        cout << "C's func called " << getC() << " times" << endl;
    }
};




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    D d;    //cria um objeto d da classe D
    int new_val;
    cin >> new_val;
    d.check(new_val);   //chama para as estatisticas finais
    return 0;
}