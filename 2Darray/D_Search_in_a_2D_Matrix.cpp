#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  int target;
  cin >> target;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  bool found = false;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == target) {
        found = true;
        break;
      }
    }
  }
  if (found) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
}