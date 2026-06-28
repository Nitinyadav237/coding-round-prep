#include <bits/stdc++.h>
using namespace std;

unsigned int check_ith_bit(int num, int ind) {
  int mask = 1U << ind;
  return ((num & mask) == 0) ? 0 : 1;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int mask = 1; mask < (1 << n); mask++) {
    for (int i = 0; i < n; i++) {
      if (check_ith_bit(mask, i) == 1) {
        cout << arr[i] << " ";
      }
    }
    cout << endl;
  }
}