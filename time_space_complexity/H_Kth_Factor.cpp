#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  vector<long long> factor;
  vector<long long> larger;

  for (long long i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      factor.push_back(i);
      long long j = n / i;
      if (i != j) {
        larger.push_back(j);
      }
    }
  }

  for (int i = larger.size() - 1; i >= 0; i--) {
    factor.push_back(larger[i]);
  }
  if (k > factor.size()) {
    cout << "-1" << endl;
  } else {
    cout << factor[k - 1] << endl;
  }
}