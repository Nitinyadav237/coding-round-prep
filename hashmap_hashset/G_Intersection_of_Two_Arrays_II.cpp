#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<long long, int> mp1;
  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    mp1[x]++;
  }
  int m;
  cin >> m;
  map<long long, int> mp2;
  for (int i = 0; i < m; i++) {
    long long x;
    cin >> x;
    mp2[x]++;
  }

  vector<long long> ans;

  for (auto x : mp1) {
    long long common_value = min(
        mp1[x.first], mp2[x.first]);  // freq of value and we need comom value
                                      // to know how many numbr is repeated

    for (int i = 0; i < common_value; i++) {
      ans.push_back(x.first);
    }
  }
  cout << ans.size() << endl;
  for (auto x : ans) {
    cout << x << " ";
  }

  cout << endl;
}