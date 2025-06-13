#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




class Matrix {
public:
    vector<vector<int>> a; //sendo "a" eh a matriz, um vetor de vetores de inteiros


    //construtor
    Matrix() {}


    Matrix operator+ (const Matrix& other) {    //definindo o comportamento do operador +
        Matrix result; //matriz para armazenar o resultado da soma
        int rows = a.size();    //num de linhas da matriz "a"
        int cols = a[0].size(); //num de colunas da matriz "a"


        //inicializa a matriz resultado com mesmo tamanho
        result.a = vector<vector<int>>(rows, vector<int>(cols, 0));


        //soma elemento a elemento
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.a[i][j] = a[i][j] + other.a[i][j];
            }
        }
        return result; //retorna a matriz somada
    }
};


//funcao auxiliar que le matriz do cin com N linhas e M colunas
Matrix readMatrix(int N, int M) {
    Matrix mat;
    mat.a = vector<vector<int>>(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat.a[i][j];
        }
    }
    return mat;
}


//funcao para imprimir a matriz
void printMatrix(const Matrix& mat) {
    for (const auto& row : mat.a) { //auto& row pega cada linha da matriz
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   
        int T;
    cin >> T; //numero de casos de teste


    while (T--) {
        int N, M;   //numero de linhas e colunas
        cin >> N >> M;


        Matrix A = readMatrix(N, M); //le a primeira matriz
        Matrix B = readMatrix(N, M); //le a segunda matriz


        Matrix C = A + B; //soma as matrizes usando o operador +


        printMatrix(C); //imprime o resultado
    }
     
    return 0;
}