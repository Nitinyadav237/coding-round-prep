#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  int max = 1e6;
  vector<int> divisor_count(max + 1, 0);

  for (int i = 1; i <= max; i++) {
    for (int j = i; j <= max; j += i) {
      divisor_count[j]++;
    }
  }
  vector<bool> is_Prime(max + 1, true);
  is_Prime[0] = false;
  is_Prime[1] = false;

  for (int i = 2; i * i <= max; i++) {
    if (is_Prime[i]) {
      for (int j = i * i; j <= max; j += i) {
        is_Prime[j] = false;
      }
    }
  }

  while (q--) {
    int x;
    cin >> x;
    if (is_Prime[divisor_count[x]])
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
