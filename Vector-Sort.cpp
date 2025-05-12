#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   
   int n, a;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a); //adiciona o valor de "a" no final do vetor
    }
    sort(v.begin(), v.end());   //ordena os elementos de "v" em ordem crescente
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }


    return 0;
}