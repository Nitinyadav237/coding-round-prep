#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  bool search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (nums[mid] == target) {
        return true;
      }
      if (nums[l] == nums[mid] and nums[mid] == nums[r]) {
        l++;
        r--;
        continue;
      }
      if (nums[l] <= nums[mid]) {  // left sorted

        if (target >= nums[l] and target < nums[mid]) {
          r = mid - 1;
        } else {
          l = mid + 1;
        }
      } else {
        if (target > nums[mid] and target <= nums[r]) {
          l = mid + 1;
        } else {
          r = mid - 1;
        }
      }
    }
    return false;
  }
};

int main() {
  vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  int target = 0;

  Solution obj;
  cout << obj.search(nums, target) << endl;

  return 0;
}