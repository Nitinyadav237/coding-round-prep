#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int l = 0;
  long long sum = 0;
  int minLength = INT_MAX;
  for (int r = 0; r < n; r++) {
    sum += arr[r];
    // keeping adding < sum_k and reduce length to d
    while (sum > k) {
      minLength = min(minLength, r - l + 1);
      sum -= arr[l];
      l++;
    }
  }
  if (minLength == INT_MAX)
    cout << -1;
  else
    cout << minLength;
}