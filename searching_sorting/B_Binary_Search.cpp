#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int target;
  cin >> target;
  bool flag = false;

  int l = 0, r = n - 1;
  while (l <= r) {
    // int mid = (l + r) / 2;
    int mid =l+(r-l)/2;
    if (arr[mid] == target) {
      flag = true;
      break;
    } else if (arr[mid] < target) {
      l = mid + 1;

    } else {
      r = mid - 1;
    }
  }

  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}