#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int prefix_sum[n];
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
        s[i] == 'u') {
      sum++;
    }
    prefix_sum[i] = sum;
  }

  int queries;
  cin >> queries;
  for (int i = 0; i < queries; i++) {
    int l, r;
    cin >> l >> r;

    l--;
    r--;

    if (l == 0) {
      cout << prefix_sum[r] << endl;
    } else {
      cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }
  }
}