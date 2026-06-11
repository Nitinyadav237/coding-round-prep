#include <bits/stdc++.h>
using namespace std;

int main() {
  int queries;
  cin >> queries;
  unordered_map<long long, int> freq;
  while (queries--) {
    int type;
    cin >> type;
    if (type == 1) {
      long long x;
      cin >> x;
      freq[x]++;
    } else if (type == 2) {
      long long x;
      cin >> x;
      freq.erase(x);
    } else if (type == 3) {
      cout << freq.size() << endl;
    } else {
      long long x;
      cin >> x;
      if (freq.count(x)) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
}