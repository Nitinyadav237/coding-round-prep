#include <bits/stdc++.h>
using namespace std;

int first_occurences(const vector<int>& arr, int target) {
  int l = 0, r = arr.size() - 1;
  int ans = -1;

  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == target) {
      ans = mid;
      r = mid - 1;
    } else if (arr[mid] < target) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return ans;
}

int last_occurences(const vector<int>& arr, int target) {
  int l = 0, r = arr.size() - 1;
  int ans = -1;

  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] == target) {
      ans = mid;
      l = mid + 1;
    } else if (arr[mid] < target) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return ans;
}

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr.begin(),arr.end());

  while (q--) {
    int x;
    cin >> x;
    int first_occ = first_occurences(arr, x);
    int last_occ = last_occurences(arr, x);
    if (first_occ == -1)
      cout << 0 << endl;
    else
      cout << last_occ - first_occ + 1 << endl;
  }
}
