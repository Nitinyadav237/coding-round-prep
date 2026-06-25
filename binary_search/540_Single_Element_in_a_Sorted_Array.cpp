#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int singleNonDuplicate(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    while (l < r) {
      int mid = l + (r - l) / 2;
      if (mid % 2 == 1) {  // make it even
        mid--;
      }
      if (nums[mid] == nums[mid + 1]) {
        l = mid + 2;
      } else {
        r = mid;
        ;
      }
    }
    return nums[l];
  }
};

int main() {
  vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};

  Solution obj;
  cout << obj.singleNonDuplicate(nums) << endl;

  return 0;
}