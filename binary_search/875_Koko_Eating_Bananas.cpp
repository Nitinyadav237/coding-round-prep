#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool is_possible(const vector<int>& piles, int speed, int h) {
    long long hours = 0;
    for (int pile : piles) {
      hours += ceil(double(pile) / speed);
    }
    return hours <= h;
  }
  int minEatingSpeed(vector<int>& piles, int h) {
    int l = 1, r = *max_element(piles.begin(), piles.end());
    int ans = -1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (is_possible(piles, mid, h)) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return ans;
  }
};

int main() {
  vector<int> piles = {3, 6, 7, 11};
  int h = 8;

  Solution obj;
  cout << obj.minEatingSpeed(piles, h) << endl;

  return 0;
}