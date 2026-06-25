#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int findMin(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;

    while (l < r) {
      int mid = l + (r - l) / 2;
      if (nums[mid] > nums[r]) {  // 7 >2
        l = mid + 1;
      } else {  // 3<7
        r = mid;
      }
    }
    return nums[l];
  }
};

int main() {
  vector<int> nums = {11, 13, 15, 17};

  Solution obj;
  cout << obj.findMin(nums) << endl;

  return 0;
}