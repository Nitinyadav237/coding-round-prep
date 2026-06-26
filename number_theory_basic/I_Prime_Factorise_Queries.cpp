#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;

  const int max = 1e6;

  vector<int> spf(max + 1);

  for (int i = 2; i <= max; i++) spf[i] = i;

  for (int i = 2; i * i <= max; i++) {
    if (spf[i] == i) {
      for (int j = i * i; j <= max; j += i) {
        if (spf[j] == j) spf[j] = i;
      }
    }
  }

  while (q--) {
    int x;
    cin >> x;
    while (x > 1) {
      int pf = spf[x];
      int count = 0;
      while (x % pf == 0) {
        count++;
        x /= pf;
      }
      cout << pf << "^" << count << " ";
    }
    cout << "\n";
  }
}