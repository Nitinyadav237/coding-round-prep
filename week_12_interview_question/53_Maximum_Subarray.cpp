#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int sum = INT_MIN;
    int max_sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
      if (sum < 0) {
        sum = 0;
      }
      sum += nums[i];
      max_sum = max(max_sum, sum);
    }
   return max_sum;
  }
};

int main() {
  vector<int> arr =  {-2,1,-3,4,-1,2,1,-5,4};
  Solution obj;
  int sum = obj.maxSubArray(arr);

  cout << sum << endl;
}