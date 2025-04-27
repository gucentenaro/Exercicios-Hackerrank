#include <iostream>
#include <string>
using namespace std;


int main() {
   // Complete the program
  
 string a, b;
 cin >> a >> b;
  cout << a.size() << " " << b.size() << endl; //tamanho das duas
 cout << a + b << endl;    //uniao das duas
  string temp_a = a.substr(1);  //string a sem o primeiro caractere
 string temp_b = b.substr(1);  //string b sem o primeiro caractere
  cout << b[0] + temp_a << " " << a[0] + temp_b << endl;
 //imprimindo o primeiro caractere de uma com o resto da outra usando a temporaria
   return 0;
}