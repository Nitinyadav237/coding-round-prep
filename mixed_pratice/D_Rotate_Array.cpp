#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void rotate_array() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int rotate_d = 0;
  cin >> rotate_d;

  rotate_d %= n;

  // left -> left ,right whole reversal
  reverse_array(arr, 0, rotate_d - 1);  // 0 -> 2 (0,1)
  reverse_array(arr, rotate_d, n - 1);  // 2 -> n-1
  reverse_array(arr, 0, n - 1);

  // reverse(arr, arr + rotate_d);
  // reverse(arr + rotate_d, arr + n);
  // reverse(arr, arr + n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    rotate_array();
  }
}