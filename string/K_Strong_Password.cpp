#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  bool lowercase = false;
  bool uppercase = false;
  bool digit = false;
  bool special = false;

  for (char ch : s) {
    if (ch >= 'a' and ch <= 'z') {
      lowercase = true;
    } else if (ch >= 'A' and ch <= 'Z') {
      uppercase = true;
    } else if (ch >= '0' and ch <= '9') {
      digit = true;
    } else {
      special = true;
    }
  }
  if (s.size() == 10 && lowercase && uppercase && digit && special) {
    cout << "Strong" << endl;
  } else {
    cout << "Weak" << endl;
  }
}