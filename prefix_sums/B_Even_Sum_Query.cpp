#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long prefix_sum[n];
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    if ((i + 1) % 2 == 0) {
      sum += arr[i];
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