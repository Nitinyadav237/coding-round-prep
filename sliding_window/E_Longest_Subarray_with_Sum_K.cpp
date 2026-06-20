#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long k;
  cin >> n >> k;
  long long arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int maxLength = 0;
  long long sum = 0;

  int l = 0;
  for (int r = 0; r < n; r++) {
    // include
    sum += arr[r];

    while (sum >= k) {
      sum -= arr[l];  // exlclude left and keep moving forward
      l++;
    }
    maxLength = max(maxLength, r - l + 1);
  }
  cout << maxLength << endl;
}