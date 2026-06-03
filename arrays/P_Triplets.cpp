#include <bits/stdc++.h>
using namespace std;

void triplet() {
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
      for (int k = j + 1; k < n; k++) {
        if (arr[i] + arr[j] + arr[k] == target) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
}
int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    triplet();
  }
}