#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bool flag = false;
  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    int req_num = target - arr[i];
    if (st.count(req_num)) {
      flag = true;
      break;
    } else {
      st.insert(arr[i]);
    }
  }
  cout << (flag ? "TRUE" : "FALSE") << endl;
}