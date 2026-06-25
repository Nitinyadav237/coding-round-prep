#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int findPeakElement(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    while (l < r) {
      int mid = l + (r - l) / 2;
      if (nums[mid] < nums[mid + 1]) {  // 3<4
        l = mid + 1;
      } else {  // 4<3 move left
        r = mid;
      }
    }
    return l;
  }
};

int main() {
  vector<int> nums = {1,2,1,3,5,6,4};

  Solution obj;
  cout << obj.findPeakElement(nums) << endl;

  return 0;
}