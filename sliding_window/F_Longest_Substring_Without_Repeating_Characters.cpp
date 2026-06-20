#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int maxLength = 0;
  map<char, int> mp;  // s[i] with freq
  int l = 0;
  for (int r = 0; r < n; r++) {
    mp[s[r]]++;  // include

    while (mp[s[r]] > 1) {  // invalid
      mp[s[l]]--;
      l++;
    }
    maxLength = max(maxLength, r - l + 1);
  }
  cout << maxLength << endl;
}