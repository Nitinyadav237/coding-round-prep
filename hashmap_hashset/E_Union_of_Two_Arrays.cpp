#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  set<long long> set;
 
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    set.insert(x);
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    long long x;
    cin >> x;
    set.insert(x);
  }
 
  int k = set.size();
  if (k == 0) {
    cout << 0 << endl;
    cout << endl;
  } else {
    cout << k << endl;
    for (auto x : set) {
      cout << x << " ";
    }
  }
}