#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long curr = 1;
  while (curr <= n) {  // find largest value
    curr *= 2;
  }
  curr /= 2;       // go one back
  while (n > 0) {  // print backward
    if (curr <= n) {
      cout << curr << " ";
      n -= curr;
    }
    curr /= 2;
  }
}