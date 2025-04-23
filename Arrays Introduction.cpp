#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  
   int N;      //tamanho do vetor
   cin >> N;   //lendo o tamanho
   int arr[1000]; //criando o vetor de tamanho N
  
   for (int i=0; i<N; i++){       //lendo o vetor
       cin >> arr[i];
   }
  
   for (int i=N-1; i>=0; i--){   //de i=N-1 ate i ser 0, decrementa i--
       cout << arr[i] << " ";    //imprimindo o vetor de tras p frente
   }
  
   return 0;
}