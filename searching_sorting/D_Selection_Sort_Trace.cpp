#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // selection notes
  // 1. select the min in the unsorted region [11,2,14,5]
  // 2.swap with first element of unsorted region need to track index

  for (int i = 0; i < n - 1; i++) {
    // 1.select min
    int min_value = arr[i];  // taking value of the unsorted region as min
    int location =
        i;  // indexof min so that infuture we can swap with unsorted region

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < min_value) {
        min_value = arr[j];
        location = j;
      }
    }

    if (location != i) {
      swap(arr[i], arr[location]);
    }
    cout << "Pass " << i + 1 << ": ";
    for (int k = 0; k < n; k++) {
      cout << arr[k] << " ";
    }
    cout << " , min_selected = " << min_value << endl;
  }
}
