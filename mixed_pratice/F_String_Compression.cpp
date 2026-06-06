#include <bits/stdc++.h>
using namespace std;

void string_compression() {
  string s;
  cin >> s;
  int n = s.size();
  int i = 0;
  while (i < n) {
    int j = i;
    int count = 0;
    while (j < n and s[i] == s[j]) {
      j++;
      count++;
    }
    cout << s[i];
    if (count > 1) {
      cout << count;
    }
    i = j;
    
  }
  cout << endl;
}
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string_compression();
  }
}