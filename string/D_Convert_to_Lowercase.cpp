#include <bits/stdc++.h>
using namespace std;

int main() {
  char ch;
  cin >> ch;

  // A - 65 a- 97 diff=32
  if (ch >= 'A' and ch <= 'Z') {
    ch += 32;
    cout << ch << endl;
  } else {
    cout << ch << endl;
  }
}