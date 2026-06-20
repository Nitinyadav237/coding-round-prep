#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long sum = 0;
  long long ans;
  // first k
  for (int i = 0; i < k; i++) {
    sum += arr[i];
  }
  ans = sum;  // update ans
  // remaining ele
  for (int i = k; i < n; i++) {
    // inc
    sum += arr[i];
    sum -= arr[i - k];  // exc
    ans = max(ans, sum);
  }
  cout << ans;
}