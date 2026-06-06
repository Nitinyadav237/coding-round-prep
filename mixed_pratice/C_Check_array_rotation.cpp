#include <bits/stdc++.h>
using namespace std;

void check_array_rotation() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // rotate sorted array always 2part big | small and we need in the min
  // smallest region
  //   [5,4,1,2,3]
  int left = 0, right = n - 1;
  while (left < right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] > arr[right]) {  //
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  cout << left << endl;
}
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    check_array_rotation();
  }
}