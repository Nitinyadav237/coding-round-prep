#include <bits/stdc++.h>
using namespace std;

int count_divisor(int n) {
  int count = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      int j = n / i;
      if (i == j) {
        count++;
      } else {
        count += 2;
      }
    }
  }
  return count;
}

int main() {
  int n, queries, k;
  cin >> n >> queries >> k;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int prefix_sum[n];
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (count_divisor(arr[i]) == k) {
      sum++;
    }
    prefix_sum[i] = sum;
  }

  for (int i = 0; i < queries; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    if (l == 0) {
      cout << prefix_sum[r] << endl;
      ;
    } else {
      cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }
  }
}