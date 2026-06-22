#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
      int element = nums[i];
      int position = nums[i] - 1;

      if (nums[position] != element) {
        swap(nums[i], nums[position]);
        i--;
      }
    }

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != i + 1) {
        ans.push_back(i + 1);
      }
    }
    return ans;
  }
};

int main() {
  vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
  Solution obj;
  vector<int> ans = obj.findDisappearedNumbers(nums);

  for (int x : ans) cout << x << " ";
}