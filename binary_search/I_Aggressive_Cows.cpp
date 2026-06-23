#include <bits/stdc++.h>
using namespace std;

bool is_possible(const vector<long long>& arr, long long gap, int k) {
  int cows_placed = 1;
  long long prev_cows = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] - prev_cows >= gap) {
      cows_placed++;
      prev_cows = arr[i];
    }
  }
  return cows_placed >= k;
}
int main() {
  int n, k;
  cin >> n >> k;

  vector<long long> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long  ans = -1;
  long long l = 0, r = arr[n - 1] - arr[0];

  while (l <= r) {
    long long mid = l + (r - l) / 2;
    if (is_possible(arr, mid, k)) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  cout << ans << endl;
}