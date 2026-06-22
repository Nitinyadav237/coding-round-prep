#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  vector<int> findDuplicates(vector<int>& nums) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
      int element = nums[i];
      int index = nums[i] - 1;

      if (nums[index] != element) {
        swap(nums[i], nums[index]);
        i--;
      }
    }
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != i + 1) {
        ans.push_back(nums[i]);
      }
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {4,3,2,7,8,2,3,1};
  Solution obj;
  vector<int> num = obj.findDuplicates(nums);

  for (int x : num) {
    cout << x << endl;
  }
}