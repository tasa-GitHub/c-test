#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N ;
  for(int - = 0;i < 7;i++){
      if(N[i] >= 'A' and N[i] <= 'Z'){
          N[i] -= 32;
      }
  }
  N[0] += 32;
  cout << N << endl;
}