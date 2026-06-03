#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int j = 0; j < m; j++) {
    int sum_arr = 0;
    for (int i = 0; i < n; i++) {
      sum_arr += arr[i][j];
    }
    cout << sum_arr << " ";
  }
}