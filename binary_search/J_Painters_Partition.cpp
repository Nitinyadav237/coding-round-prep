#include <bits/stdc++.h>
using namespace std;

bool is_possible(const vector<long long>& arr, long long time, long long k) {
  int painter = 1;
  long long work = 0;

  for (int i = 0; i < arr.size(); i++) {
    if (work + arr[i] <=time) {  // checking if i add work can do within time if yes add it
      work += arr[i];
    } else {
      painter++;
      work = arr[i];
    }
  }
  return painter <= k;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<long long> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long ans = -1;
  long long l = *max_element(arr.begin(),arr.end());
  long long r = accumulate(arr.begin(),arr.end(),0LL);

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