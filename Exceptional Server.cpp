#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <vector>
#include <cmath>


using namespace std;


int calc(long long A, long long B) {


    if (A < 0) {
        throw invalid_argument("A is negative");    //para negativo
    }


    vector<int> v(A, 0); // Pode causar bad_alloc, pois cria um vetor de tamanho A preenchidos de 0, se A for muito grande excecao bad_alloc


    int real = -1;
    int cmplx = sqrt(-1); // Forca comportamento estranho (raiz negativa)


    if (B == 0) throw 0; // Se B == 0,


    real = (A / B) * real;


    int ans = v.at(B); // funcao at() faz uma verificao de seguranca e lanca uma excecao chamada out_of_range se tentar acessar fora do limite.


    return real + A - B * ans;
}


int main() {
    int T;
    cin >> T;


    int temp = T;   //para imprimir depois


    while (T--) {   //loop T vezes
        long long A, B;
        cin >> A >> B;


        try {   //tratar cada tipo de erro de forma especifica
            cout << calc(A, B) << endl;  
        }
        catch (bad_alloc& e) {
            cout << "Not enough memory" << endl;
        }
        catch (exception& e) {
            cout << "Exception: " << e.what() << endl;
        }
        catch (...) {
            cout << "Other Exception" << endl;
        }
    }
   
    cout << temp;
   
    return 0;
}