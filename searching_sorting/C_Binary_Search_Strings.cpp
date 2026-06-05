#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string arr[n];
  cin.ignore();

  for (int i = 0; i < n; i++) {
    getline(cin, arr[i]);
  }
  string target;
  getline(cin, target);

  int l = 0, r = n - 1;
  bool flag = false;
  while (l <= r) {
    int mid = l + (r - l) / 2;
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