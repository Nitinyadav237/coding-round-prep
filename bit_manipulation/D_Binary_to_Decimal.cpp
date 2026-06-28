#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  long long curr = 1;
  for (int i = 1; i < s.size(); i++) {
    curr *= 2;
  }

  long long ans = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      ans += curr;
    }
    curr /= 2;
  }
  cout << ans << endl;
}