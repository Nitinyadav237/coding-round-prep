#include <bits/stdc++.h>
using namespace std;

void count_quadraplets() {
  int n;
  cin >> n;
  int arr[n];

  int target;
  cin >> target;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        for (int l = k + 1; l < n; l++) {
          if (arr[i] - 2 * (arr[j]) + 3 * arr[k] - 4 * arr[l] == target) {
            count++;
          }
        }
      }
    }
  }
  cout << count << endl;
}
int main() {
 count_quadraplets();
}