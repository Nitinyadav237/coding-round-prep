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

  // xor
  int xor_arr = 0;
  for (int x : arr) {
    xor_arr ^= x;
  }

  // pos
  int pos = -1;
  for (int i = 0; i < 32; i++) {
    if (check_ith_bit(xor_arr, i) == 1) {
      pos = i;
      break;
    }
  }
  // create group based on pos
  int grp1 = 0;
  int grp2 = 0;
  for (int x : arr) {
    if (check_ith_bit(x, pos) == 1) {
      grp1 ^= x;
    } else {
      grp2 ^= x;
    }
  }
  if (grp1 > grp2) swap(grp1, grp2);

  cout << grp1 << " " << grp2;
}