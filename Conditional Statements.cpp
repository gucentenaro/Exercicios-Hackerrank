#include <bits/stdc++.h>


using namespace std;
  
string ltrim(const string &);
string rtrim(const string &);


int main()
{
   string n_temp;
   getline(cin, n_temp);


   int n = stoi(ltrim(rtrim(n_temp)));


   // Write your code here
   string nomes [9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}; //vetor com os nomes
  
   if (n>= 1 && n<=9){
       cout << nomes[n-1]; //ex se n for 1 vai printar o espaco zero do vetor
   } else {
       cout << "Greater than 9";
   }
   return 0;
   }


   //O codigo feito foi esse trecho de cima   


string ltrim(const string &str) {
   string s(str);


   s.erase(
       s.begin(),
       find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
   );


   return s;
}


string rtrim(const string &str) {
   string s(str);


   s.erase(
       find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
       s.end()
   );


   return s;
}