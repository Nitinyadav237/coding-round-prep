#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;

  int count = 0;
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
      while (n % i == 0) {
        n /= i;
      }
    }
  }
  if (n > 1) {
    count++;
  }
  cout << count << endl;
}