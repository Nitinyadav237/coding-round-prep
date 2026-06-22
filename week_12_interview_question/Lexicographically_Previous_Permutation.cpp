#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  string prevPermutation(string& s) {
    // code here
    int n = s.size();
    int i = n - 2;
    while (i >= 0 and s[i] <= s[i + 1]) {
      i--;
    }
    if (i < 0) {
      return "-1";  // no less than element index out of bound
    }
    int j = n - 1;
    while (s[j] >= s[i]) {
      j--;
    }
    swap(s[i], s[j]);
    reverse(s.begin() + i + 1, s.end());
    if (s[0] == '0') return "-1";

    return s;
  }
};
int main() {
  string s = "1234";
  Solution obj;
  string s1 = obj.prevPermutation(s);

  for (char x : s1) {
    cout << x << " ";
  }
}