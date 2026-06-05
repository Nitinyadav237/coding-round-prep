#include <bits/stdc++.h>
using namespace std;

int main() {
  char ch;
  cin >> ch;

  if (ch >= 'a' and ch <= 'z') {
    cout << "Lowercase" << endl;
  } else if (ch >= 'A' and ch <= 'Z') {
    cout << "Uppercase" << endl;
  } else if (ch >= '0' and ch <= '9') {
    cout << "Digit" << endl;
  } else {
    cout << "Special" << endl;
  }
}