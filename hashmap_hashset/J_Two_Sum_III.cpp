#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, target;
  cin >> n >> target;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

   long long count = 0;
  bool flag = false;
  unordered_map<int, int> mp;  // value ,freq
  for (int i = 0; i < n; i++) {
    int req_num = target - arr[i];
    if (mp.count(req_num)) {
      count += mp[req_num];
    }
    mp[arr[i]]++;
  }
  
    cout << count << endl;
  
}