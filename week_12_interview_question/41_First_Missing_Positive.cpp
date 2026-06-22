#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int firstMissingPositive(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      int elements = nums[i];

      if (nums[i] <= 0 or nums[i] > nums.size()) {
        continue;
      }
      int index = nums[i] - 1;

      if (nums[index] != elements) {
        swap(nums[i], nums[index]);
        i--;
      }
    }
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != i + 1) {
        return i + 1;
      }
    }
    return nums.size() + 1;
  }
};

int main() {
  vector<int> nums = {2147483647, 2147483646, 2147483645, 3,          2,
                      1,          -1,         0,          -2147483648};
  Solution obj;
  int ans = obj.firstMissingPositive(nums);

  cout << ans << endl;
}