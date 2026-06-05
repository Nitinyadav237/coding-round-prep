#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  int count = 0;
  for (char ch : s) {
    if (ch ==' ') {
      count++;
    }
  }
  cout << count + 1 << endl;
}