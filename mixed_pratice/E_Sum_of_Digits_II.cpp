#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int sum = 0;
  for (int i = 0; i < s.size(); i++) {
    sum += s[i] - '0';  // string '0' ascii value = 48 so subtractign that make it zero
  }
  cout << sum << endl;
}