#include <bits/stdc++.h>
using namespace std;

void arrange_number() {
  int n;
  cin >> n;
  int arr[n];

  int num = 1;
  int i = 0, j = n - 1;
  while (i <= j) {
    // odd

    if (num % 2 != 0) {
      arr[i] = num;
      num++;
      i++;
    } else {
      arr[j] = num;
      num++;
      j--;
    }
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
    arrange_number();
  }
}