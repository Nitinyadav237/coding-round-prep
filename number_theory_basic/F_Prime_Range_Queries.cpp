#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<bool> is_prime(n + 1, true);
  if (n >= 0) is_prime[0] = false;
  if (n >= 1) is_prime[1] = false;

  for (int i = 2; i * i <= n; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= n; j += i) {
        is_prime[j] = false;
      }
    }
  }

  vector<int> prefix_sum(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + (is_prime[i] ? 1 : 0);
  }

  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
  }
}