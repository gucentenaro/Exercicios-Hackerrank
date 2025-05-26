#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




//classe base
class Triangle {
public:
    void triangle() {
        cout << "I am a triangle" << endl;
    }
};


//classe intermediaria que herda de Triangle
class Isosceles : public Triangle {
public:
    void isosceles() {
        cout << "I am an isosceles triangle" << endl;
    }
};


//classe derivada final que herda de Isosceles
class Equilateral : public Isosceles {
public:
    void equilateral() {
        cout << "I am an equilateral triangle" << endl;
        isosceles();   //chama funcao da classe Isosceles
        triangle();    //chama funcao da classe Triangle
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    Equilateral eq;   //cria objeto da classe Equilateral
    eq.equilateral(); //chama a funcao que imprime todas as mensagens, ou seja, chama a funcao equilateral da classe "C" e essa funcao chama funcoes da classe A e B
   
    return 0;
}


//um objeto da classe C pode acessar as funcoes da classe A e classe B.