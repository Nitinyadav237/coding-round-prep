#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  if (n < 2) {
    cout << "NO" << endl;
    return 0;
  }

  bool prime = true;
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      prime = false;
      break;
    }
  }

  cout << (prime ? "YES" : "NO") << endl;
}