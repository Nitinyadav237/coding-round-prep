#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int maxLength = 0;
  map<char, int> mp;
  int l = 0;
  for (int r = 0; r < n; r++) {
    mp[s[r]]++;  // include
    while (mp.size() > k) {
      mp[s[l]]--;
      if (mp[s[l]] == 0) {
        mp.erase(s[l]);
      }
      l++;
    }
    maxLength = max(maxLength, r - l + 1);
  }
  cout << maxLength << endl;
}
