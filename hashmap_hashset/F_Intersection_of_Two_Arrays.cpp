#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<long long> st;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    st.insert(x);
  }
  int m;
  cin >> m;
  set<long long> ans;
  for (int i = 0; i < m; i++) {
    long long x;
    cin >> x;
    if (st.count(x)) {
      ans.insert(x);
    }
  }

  int k = ans.size();
  
  if (k == 0) {
    cout << 0 << endl;
    cout << endl;
  } else {
    cout << k << endl;
    for (auto x : ans) {
      cout << x << " ";
    }
  }
}