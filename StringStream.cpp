#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


vector<int> parseInts(string str) { //recebe string e retorna um int
   // Complete this function
   vector<int> resultado(800000);
   stringstream ss(str);
   int numero;
   char virgula;
   int indice = 0;
  
   while (ss>>numero){ //enquanto houver num p ler na stringstream
    resultado[indice] = numero;//armazena o num lido no indice 0..
    indice ++;
    ss>>virgula;   //leu a virgula e n fez nada com ela(descartou)
   }
   return vector<int>(resultado.begin(), resultado.begin() + indice); //foi criado um novo vetor que inicia no primeiro numero do vetor resultado (resultado.begin) e finaliza no ultimo numero, a depender de quantos indices foram usados (resultado.begin + indice).
}


int main() {
   string str;
   cin >> str;
   vector<int> integers = parseInts(str);
   for(int i = 0; i < integers.size(); i++) {
       cout << integers[i] << "\n";
   }
  
   return 0;
}