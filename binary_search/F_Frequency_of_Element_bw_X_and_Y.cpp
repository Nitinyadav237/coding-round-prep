#include <bits/stdc++.h>
using namespace std;

int greater_x(const vector<int>& arr,
              int x) {  // >=x / finfding index of first true
  int ans = -1;
  int l = 0, r = arr.size() - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] >= x) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return ans;
}

int less_x(const vector<int>& arr,
           int y) {  // <=x / finfding index of first true
  int ans = -1;
  int l = 0, r = arr.size() - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] <= y) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return ans;
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());

  while (q--) {
    int x, y;
    cin >> x >> y;
    int left = greater_x(arr, x);
    int right = less_x(arr, y);
    if (left == -1 || right == -1 || left > right)
      cout << 0 << endl;
    else
      cout << right - left + 1 << endl;
  }
}
