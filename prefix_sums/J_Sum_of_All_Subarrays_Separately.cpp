#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  long long prefix_sum[n];
  long long sum = 0LL;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    prefix_sum[i] = sum;
  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (i == 0) {
        cout << prefix_sum[j] << "\n";
      } else {
        cout << prefix_sum[j] - prefix_sum[i - 1] << "\n";
      }
    }
  }
}
