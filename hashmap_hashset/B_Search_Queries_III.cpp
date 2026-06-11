#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, queries;
  cin >> n >> queries;

  unordered_map<long long, int> unmap;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    unmap[x] = i + 1;
  }

  while (queries--) {
    long long x;
    cin >> x;
    if (unmap.count(x)) {
      cout << unmap[x] << endl;
    } else {
      cout << -1 << endl;
    }
  }
}