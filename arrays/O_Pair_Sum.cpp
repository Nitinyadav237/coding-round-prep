#include <bits/stdc++.h>
using namespace std;

void pair_sum() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int target;
  cin >> target;

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == target) {
        count++;
      }
    }
  }
  cout << count << endl;
}
int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    pair_sum();
  }
}