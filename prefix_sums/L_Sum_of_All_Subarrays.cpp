#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
 
  long long prefix_sum[n];
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    prefix_sum[i] = sum;
  }
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
 
      if (i == 0) {
        ans += prefix_sum[j];
      } else {
        ans += prefix_sum[j] - prefix_sum[i - 1];
      }
    }
  }
  cout << ans << endl;
}