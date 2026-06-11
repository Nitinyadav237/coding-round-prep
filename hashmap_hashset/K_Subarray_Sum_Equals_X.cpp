#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long target;
  cin >> n >> target;
  long long arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  unordered_set<long long> st;
  long long pre_sum = 0LL;
  for (int i = 0; i < n; i++) {
    pre_sum += arr[i];
    if (pre_sum == target) {  // p[r]== target for(l==0)
      cout << "YES" << endl;
      return 0;
    }
    if (st.count(pre_sum - target)) {  // p[r]-x=p[l-1]
      cout << "YES" << endl;
      return 0;
    }
    st.insert(pre_sum);
  }
  cout << "NO" << endl;
}
