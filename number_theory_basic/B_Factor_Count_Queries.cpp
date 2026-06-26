#include <bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  const int MAX = 1000000;
  vector<int> factorCount(MAX + 1, 0);

  for (int i = 1; i <= MAX; i++) {
    for (int j = i; j <= MAX; j += i) {
      factorCount[j]++; //2 [1,]
    }
  }
  while (q--) {
    int x;
    cin >> x;
    cout << factorCount[x] << "\n";
  }
}