#include <bits/stdc++.h>
using namespace std;

void counting_interval() {
  int t;
  long long l, r;
  cin >> t >> l >> r;

  if (l > r) {
    cout << '0' << endl;
    return ;
  }
  if (t == 1) {
    cout << max(0LL, r - l - 1) << endl;
  } else if (t == 2 || t == 3) {
    cout << r - l << endl;
  } else {
    cout << r - l + 1 << endl;
  }
}
int main() {
  int queries;
  cin >> queries;
  for (int i = 0; i < queries; i++) {
    counting_interval();
  }
}