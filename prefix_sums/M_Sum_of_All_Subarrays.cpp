#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum +=1LL* (i + 1) * (n - i) * arr[i];
  }
  cout << sum << endl;
}
