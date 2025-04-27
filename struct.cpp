#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct Student {    //lembrar de deixar o struct minusculo
   int age;
   string first_name;
   string last_name;
   int standard;
};  //lembrar de colocar o ;


int main() {
   Student st;
  
   cin >> st.age >> st.first_name >> st.last_name >> st.standard;
   cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
  
   return 0;
}