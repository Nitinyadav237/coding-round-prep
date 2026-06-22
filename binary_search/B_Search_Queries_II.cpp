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
    int l = 0, r = n - 1;
    int x;
    cin >> x;
    int ans = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (arr[mid] == x) {
        ans = mid;
        break;
      } else if (arr[mid] < x) {  // 2<3 [4,3,2,1 0,-1]
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    if (ans == -1) {
      cout << -1 << endl;
    } else {
      cout << ans + 1 << endl;
    }
  }
}