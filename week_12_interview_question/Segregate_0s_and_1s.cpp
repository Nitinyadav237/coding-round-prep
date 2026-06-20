#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  void segregate0and1(vector<int>& arr) {
    int l = 0;
    int r = arr.size() - 1;

    while (l < r) {
      if (arr[l] == 0) {
        l++;
      } else {
        swap(arr[l], arr[r]);
        r--;
      }
    }
  }
};
int main() {
  vector<int> arr = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
  Solution obj;
  obj.segregate0and1(arr);
  for (int x : arr) {
    cout << x << " ";
  }
  cout << endl;
}