#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  int arr1[n];
  int arr2[m];

  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }

  unordered_set<int> good_num;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    good_num.insert(x);
  }

  int count = 0;
  for (int i = 0; i < k; i++) {
    if (good_num.count(arr1[i])) {
      count++;
    }
  }
  cout << count << " ";

  for (int i = k; i < n; i++) {
    if (good_num.count(arr1[i])) {
      count++;
    }
    if (good_num.count(arr1[i - k])) {
      count--;
    }
    cout << count << " ";
  }
}
