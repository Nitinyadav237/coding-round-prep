#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  int q;
  cin >> q;

  while (q--) {
    int type;
    int i;
    cin >> type >> i;
    long long mask = 1LL << i;
    if (type == 1) {
      cout << (((n & mask) != 0) ? "YES" : "NO") << endl;
    } else if (type == 2) {
      n |= mask;
      cout << n << endl;

    } else if (type == 3) {
      n = n & (~mask);
      cout << n << endl;

    } else {
      n ^= mask;
      cout << n << endl;
    }
  }
}