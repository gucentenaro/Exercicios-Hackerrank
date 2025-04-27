#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Student {
 private:
   int scores[5]; //nao vai ser mudado o tamanho
  
   public:
   void input() {  //funao da classe Student que nao ira retornar nada, servindo para ler as notas
       for (int i=0; i<5; i++){
           cin >> scores[i];
       }
   }
       int calcularsomaScore() {   //funcao que devolve um inteiro, eh a soma das notas do aluno
       int somaScore = 0;
       for (int i = 0; i < 5; i++) {
           somaScore += scores[i];  // Soma todas as notas
       }
       return somaScore;
   }
};


int main() {
   int n;  //numero de alunos
   cin >> n;
  
   Student kristen;    //chamando o objeto (Kristen) especifico da classe (Student) criada, posso usar varios objetos para uma mesma classe com valores diferentes.
   kristen.input();    //lendo as notas dela
  
   int soma_kristen;
   soma_kristen = kristen.calcularsomaScore(); //calculando a soma do aluno
  
   int count = 0;
   for (int i = 0; i < n-1; i++) { //n-1 pois tira kristen da comparacao, ja que a comp eh com ela mesma
       Student outro_aluno;
       outro_aluno.input();  //calcula as notas dos outros alunos
       int totalScore = outro_aluno.calcularsomaScore();  //calculando as somas dos outros alunos


       if (totalScore > soma_kristen) {
           count++;  //vai incrementar no contador se o aluno tiver uma soma maior do que a kristen
       }
   }
  
   cout << count;    //exibe quantos alunos tiveram nota maior doq kristen
  
   return 0;
}