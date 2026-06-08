#include <bits/stdc++.h>
using namespace std;

void interval_sum() {
  long long l, r;
  cin >> l >> r;

  long long sum = r * (r + 1) / 2  - (l - 1) * l / 2;
  cout << sum << endl;
}
int main() {
  int queries;
  cin >> queries;
  for (int i = 0; i < queries; i++) {
    interval_sum();
  }
}
