#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++) {
    
    int req_num = target - arr[i];

    if (mp.count(req_num)) {
      cout << mp[req_num] + 1 << " " << i + 1 << endl;
      return 0;
    }
    mp[arr[i]] = i;
  }

  cout << -1 << endl;
}