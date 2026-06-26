#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int q;
  cin >> q;
  int max = 1e6;
  vector<bool> is_prime(max + 1, true);
  is_prime[0] = false;
  is_prime[1] = false;

  for (int i = 2; i * i <= max; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= max; j += i) {
        is_prime[j] = false;
      }
    }
  }

  while (q--) {
    int x;
    cin >> x;
    if (is_prime[x]) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}