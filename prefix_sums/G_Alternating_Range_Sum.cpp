#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];
  int queries;
  cin >> queries;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long prefix_sum[n];
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      sum += arr[i];
    } else {
      sum -= arr[i];
    }

    prefix_sum[i] = sum;
  }

  for (int i = 0; i < queries; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;

    long long ans;
    if (l == 0) {
      ans = prefix_sum[r];
    } else {
      ans = prefix_sum[r] - prefix_sum[l - 1];
    }

    if (l % 2 == 1) {
      ans = -ans;
    }
    cout << ans << endl;
  }
}