#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long prefix_sum[n];
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    prefix_sum[i] = sum;
  }
  long long maxmium = LLONG_MIN;
  for (int i = 0; i <= n - k; i++) {
    int j = i + k - 1;
    long long sum = 0LL;
    if (i == 0) {
      sum += prefix_sum[j];
    } else {
      sum += prefix_sum[j] - prefix_sum[i - 1];
    }
    maxmium = max(maxmium, sum);
  }
  cout << maxmium << endl;
}