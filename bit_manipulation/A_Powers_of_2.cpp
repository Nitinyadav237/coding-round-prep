#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  long long cur = 1;
  while (cur <= n) {
    cout << cur << " ";
    cur *= 2;
  }
}
