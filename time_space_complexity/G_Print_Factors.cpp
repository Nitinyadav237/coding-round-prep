#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  vector<long long> large;
  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      cout << i << " ";
      long long j = n / i;
      if (i != j) {
        large.push_back(j);
      }
    }
  }
  for (int i = large.size() - 1; i >= 0; i--) {
    cout << large[i] << " ";
}
  cout << endl;
}