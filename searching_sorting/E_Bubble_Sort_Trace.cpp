#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // bubble sort swap adjacent element if arr[j]<arr[j+1]
  // 1.after every pass largest element of the unsorted region will reach at the
  // end so i->n-1 to 0
  int pass = 1;
  for (int i = n - 1; i >= 1; i--) {
    int swap_count = 0;

    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swap_count++;
      }
    }

    cout << "Pass " << pass<< ": ";
    for (int k = 0; k < n; k++) {
      cout << arr[k]<< " ";
    }
    cout << ", swaps = " << swap_count << endl;

    if (swap_count == 0) {
      break;
    }
    pass++;
  }
}