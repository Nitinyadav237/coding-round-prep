#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long ans=0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      long long sum = 0;
      for (int k = i; k <= j; k++) {
        sum += arr[k];
      }
      ans += sum;
    }
  }
  cout << ans << endl;
}