
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bool is_sorted = true;
  for (int i = 1; i < n; i++) {
    if (arr[i - 1] > arr[i]) {
      is_sorted = false;
    }
  }
//   if (is_sorted) {
//     cout << "YES" << endl;
//   } else {
//     cout << "NO" << endl;
//   }
cout << (is_sorted ? "YES": "NO")<< endl;
}