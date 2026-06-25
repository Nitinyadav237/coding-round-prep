#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int floorSqrt(int n) {
    // code here
    int l = 0, r = n;
    int ans = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;

      if (mid * mid <= n) {  // i2 <=n
        ans = mid;
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    return ans;
  }
};

int main() {
  int n;
  cin >> n;

  Solution obj;
  cout << obj.floorSqrt(n) << endl;

  return 0;
}