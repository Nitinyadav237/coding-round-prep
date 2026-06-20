#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  long long arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = 0;
  map<long long, int> mp;  // value -->freq
  for (int i = 0; i < k; i++) {
    mp[arr[i]]++;  // if it exist add one else create one new and save freq 1
    if (mp[arr[i]] == 1) {
      count++;
    }
  }
  cout << count << " ";
  for (int i = k; i < n; i++) {
    // include;
    mp[arr[i]]++;
    if (mp[arr[i]] == 1) {
      count++;
    }
    mp[arr[i - k]]--;
    if (mp[arr[i - k]] == 0) {
      count--;
    }
    cout << count << " ";
  }
}
