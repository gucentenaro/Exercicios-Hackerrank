#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Rectangle {
protected:  //usa protected para classes derivadas poderem ter acesso
    int width;
    int height;


public:
    void display() {
        cout << width << " " << height << endl;
    }
};


class RectangleArea : public Rectangle {    //subclasse que herda de Rectangle
public:
    void read_input() { //le a altura e o comprimento
        cin >> width >> height;
    }


    void display() {   //imprime a area do retangulo
        cout << width * height << endl;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
    //cria objeto da classe derivada
    RectangleArea r_area;


    //chama o metodo para ler largura e altura
    r_area.read_input();


    //imprime largura e altura
    r_area.Rectangle::display();


    //chama o display e imprime a area
    r_area.display();


    return 0;
}