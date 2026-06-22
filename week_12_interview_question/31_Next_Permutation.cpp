#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;                               // second last num
    while (i >= 0 and nums[i] >= nums[i + 1]) {  // 2nd >1st
      i--;
    }

    // we have find the value which has to swap
    if (i >= 0) {
      int j = n - 1;  // last element
      while (nums[j] <= nums[i]) {
        j--;
      }
      swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());

  }
};

int main() {
    vector<int> nums = {1, 2, 3};

    Solution obj;
    obj.nextPermutation(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}