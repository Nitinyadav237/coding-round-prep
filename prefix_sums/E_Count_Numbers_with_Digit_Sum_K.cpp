#include <bits/stdc++.h>
using namespace std;

long long digit_sum(long long n) {
  long long sum = 0;
  while (n > 0) {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}

int main() {
  int n, queries, k;
  cin >> n >> queries >> k;
  long long arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long prefix_sum[n];
  long long sum = 0;

  for (int i = 0; i < n; i++) {
    if (digit_sum(arr[i]) == k) {
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