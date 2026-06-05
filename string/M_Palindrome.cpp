#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int i = 0, j = s.size() - 1;

  while (i < j) {
    if (s[i] != s[j]) {
      cout << "NO";
      return 0;
    }
    i++;
    j--;
  }
  cout << "YES" << endl;
}