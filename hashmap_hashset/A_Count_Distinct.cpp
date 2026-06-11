#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  unordered_set<long long> unset;

  for (int i = 0; i < n; i++) {
    unset.insert(arr[i]);
  }
  cout << unset.size() << endl;
}