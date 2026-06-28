#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n == 0) {
    cout << 0;
    return 0;
  }

  long long curr = 1;
  while (curr <= n) {
    curr *= 2;
  }
  curr /= 2;

  while (curr > 0) {
    if (curr <= n) {
      cout << 1;
      n -= curr;
    } else {
      cout << 0;
    }
    curr /= 2;
  }
}