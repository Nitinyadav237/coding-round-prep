#include <bits/stdc++.h>
using namespace std;

bool is_possible(const vector<long long>& arr, long long pages, int k) {
  int student = 1;
  long long curr_page = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] + curr_page <= pages) {  // curr_page < allocated page
      curr_page += arr[i];
    } else {
      student++;
      curr_page = arr[i];
    }
  }
  return student <= k;
}

int main() {
  int n, k;
  cin >> n >> k;

  if (k > n) {
    cout << -1 << endl;
    return 0;
  }

  vector<long long> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long ans = -1;
  long long l = *max_element(arr.begin(), arr.end());
  long long r = accumulate(arr.begin(), arr.end(), 0LL);

  while (l <= r) {
    long long mid = l + (r - l) / 2;

    if (is_possible(arr, mid, k)) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }

  cout << ans << endl;
}