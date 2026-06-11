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
  long long count = 0LL;
  long long pre_sum = 0LL;
  unordered_map<long long, int> mp;
  for (int i = 0; i < n; i++) {
    pre_sum += arr[i];
    if (pre_sum == target) {
      count++;
    }
    if (mp.count(pre_sum - target)) {
      count += mp[pre_sum - target];
    }
    mp[pre_sum]++;
  }
  cout << count << endl;
}