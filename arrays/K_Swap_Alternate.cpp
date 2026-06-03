#include <bits/stdc++.h>
using namespace std;

void swap_alternate() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 1; i < n; i += 2) {
    swap(arr[i], arr[i - 1]);
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    swap_alternate();
  }
}