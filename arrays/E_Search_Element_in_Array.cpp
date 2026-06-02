#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  int target;
  cin >> target;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bool flag = false;
  for (int i = 0; i < n; i++) {
    if (target == arr[i]) {
      flag = true;
      break;
    }
  }
  if (flag) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}