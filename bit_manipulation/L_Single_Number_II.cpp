#include <bits/stdc++.h>
using namespace std;

unsigned int check_ith_bit(int num, int index) {
  unsigned int mask = 1U << index;
  return ((num & mask) == 0) ? 0 : 1;
}
unsigned int set_ith_bit(int num, int index) {
  unsigned int mask = 1U << index;
  return num | mask;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = 0;
  for (int j = 0; j < 32; j++) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (check_ith_bit(arr[i], j) == 1) {
        sum++;
      }
    }
    if (sum % 3 == 1) {  // odd
      ans = set_ith_bit(ans, j);
    }
  }
  cout << ans << endl;
}