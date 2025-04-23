#include <iostream>
#include <cstdio>
using namespace std;


int main() {
   // Complete the code.
   int a;
   int b;
   cin >> a;
   cin >> b;
   string nomes [9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
      
   for (int i=a; i <= b; i++){
       if (i >= 1 && i <= 9){
           cout << nomes[i-1] << endl;
       } else if (i > 9 && i % 2 == 0) {
           cout << "even" << endl;
       } else if (i > 9 && i % 2 != 0) {
           cout << "odd" << endl;
       }
   }
   return 0;
}