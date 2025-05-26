#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle {  // Classe base
public:
    void triangle() {
        cout << "I am a triangle\n";  
    }
};


class Isosceles : public Triangle {
public:
    void isosceles() {  // Funcao especifica da classe Isosceles
        cout << "I am an isosceles triangle\n";
    }
    void explicacao() {
        cout << "In an isosceles triangle two sides are equal" << endl;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    Isosceles isc;
    isc.isosceles();
    isc.explicacao();
    isc.triangle();
   
    return 0;
}