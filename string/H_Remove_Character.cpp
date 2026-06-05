#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  char c;
  cin >> c;

string new_s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != c) {
      new_s+=s[i];
    }
  }
  cout << new_s << endl;
}