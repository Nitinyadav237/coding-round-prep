#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long target;
  cin >> n >> target;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  unordered_map<long long, int> mp;  // value ,index
  long long pre_sum = 0LL;

  for (int i = 0; i < n; i++) {
    pre_sum += arr[i];
    if (pre_sum == target) {
      cout << 1 << " " << i + 1 << endl;
      return 0;
    }
    if (mp.count(pre_sum - target)) {
      cout << mp[pre_sum - target] + 1 << " " << i + 1 << endl;
      return 0;
    }
    mp[pre_sum] = i + 1;
  }
  cout << -1 << endl;
}