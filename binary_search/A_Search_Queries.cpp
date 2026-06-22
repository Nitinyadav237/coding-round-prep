#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  while (q--) {
    int x;
    cin >> x;
    int ans = -1;

    int l = 0;
    int r = n - 1;

    while (l <= r) {
      int mid = l + (r - l) / 2;

      if (arr[mid] == x) {
        ans = mid;
        break;
      } else if (arr[mid] < x) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }

    if (ans == -1)
      cout << -1 << endl;
    else
      cout << ans + 1 << endl;
  }
}