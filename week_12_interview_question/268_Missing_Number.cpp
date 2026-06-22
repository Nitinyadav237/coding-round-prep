#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      int element = nums[i];
      int position = nums[i];

      if (position < nums.size() and nums[position] != element) {
        swap(nums[i], nums[position]);
        i--;
      }
    }

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != i) {
        return i;
      }
    }

    return nums.size();
  }
};

int main() {
  vector<int> nums = {3, 0, 1};
  Solution obj;
  int num = obj.missingNumber(nums);

  cout << num << endl;
}