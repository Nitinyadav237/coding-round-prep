#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr.begin(), arr.end());

  while (q--) {
    int x;
    cin >> x;
    int ans = -1;
    int l = 0, r = n - 1;

    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (arr[mid] >= x) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;  // because true is on other  side
      }
    }
    if (ans == -1)
      cout << -1 << endl;
    else
      cout << arr[ans] << endl;
  }
}