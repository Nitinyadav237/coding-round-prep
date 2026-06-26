#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> factor(n + 1); //[][]

  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j += i) {
      factor[j].push_back(i);  //
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int x : factor[i]) {
      cout << x << " ";
    }
    cout << endl;
  }
}