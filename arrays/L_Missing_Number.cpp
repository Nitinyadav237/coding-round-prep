#include <bits/stdc++.h>
using namespace std;

void missing_number() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = 0;
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    if (count == 1) {
      ans = arr[i];
      break;
    }
  }
  cout << ans << endl;
}
int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    missing_number();
  }
}