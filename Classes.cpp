//detalhe: fiz no c++11 sem perceber e depois vi que mudava um pouco do c++20, mas o exercício eh o mesmo


#include <iostream>
#include <sstream>
using namespace std;


class Student {
   private:    //conforme o texto definir as variaveis no private, pois assim as variaveis ficam seguras e so podem ser acessadas dentro da classe
   int age;
   string first_name;
   string last_name;
   int standard;
  
   //agora vem a parte publica que a main vai ter acesso
   public:
  
   //funcoes Setters, servem para definir/atribuir os dados:
  
   void set_age(int a) {
       age = a;
   }
   void set_first_name(string fn) {
       first_name = fn;
   }
   void set_last_name(string ln) {
       last_name = ln;
   }
   void set_standard(int s) {
       standard = s;
   }


   //funcoes Getters, para acessar/pegar os dados
   int get_age() {
       return age;
   }
   string get_first_name() {
       return first_name;
   }
   string get_last_name() {
       return last_name;
   }
   int get_standard() {
       return standard;
   }


   //funcao para gerar a string com tds os dados juntos (pq no final precisa imprimir isso)
   string to_string() {
       stringstream ss;
       ss << age << "," << first_name << "," << last_name << "," << standard;
       return ss.str();
   }
};


int main() {
   int age, standard;
   string first_name, last_name;
  
   cin >> age >> first_name >> last_name >> standard;
  
   Student st;
   st.set_age(age);
   st.set_standard(standard);
   st.set_first_name(first_name);
   st.set_last_name(last_name);
  
   cout << st.get_age() << "\n";
   cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
   cout << st.get_standard() << "\n";
   cout << "\n";
   cout << st.to_string(); //imprimindo tds os dados juntos
  
   return 0;
}