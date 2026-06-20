#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  map<int, int> mp;  // num and freq

  int l = 0;
  long long count = 0;
  for (int r = 0; r < n; r++) {
    mp[arr[r]]++;

    while (mp.size() > k) {
      mp[arr[l]]--;
      if (mp[arr[l]] == 0) {
        mp.erase(arr[l]);
      }
      l++;
    }
    count += r - l + 1;
  }
  cout << count << endl;
}
