#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int count_0 = 0;
  int count_1 = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      count_0++;
    } else {
      count_1++;
    }
  }

  // print 0 and 1
  for (int i = 0; i < count_0; i++) {
    cout << "0 ";
  }
  for (int i = 0; i < count_1; i++) {
    cout << "1 ";
  }
  cout << endl;
}


int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    solve();
  }
}