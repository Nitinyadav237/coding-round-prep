#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // insetion sort [11,23,5,1] first we assume first element is in sorted region
  // and run i from 1 ->n
  //   and shift element if comaprign i with i-1 and shift current if the bigger
  //   element to right
  for (int i = 1; i < n; i++) {
    int shift_count = 0;
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 and arr[j] > temp) {  // pre ele greater than curr 11 2
      arr[j + 1] = arr[j];
      j--;
      shift_count++;
    }
    arr[j + 1] = temp;

    cout << "Pass " << i << ": ";
    for (int k = 0; k < n; k++) {
      cout << arr[k] << " ";
    }
    cout << " , ";

    // Sorted region [0...i]
    for (int k = 0; k <= i; k++) {
      cout << arr[k] << " ";
    }

    cout << "| ";

    // Unsorted region [i+1...n-1]
    for (int k = i + 1; k < n; k++) {
      cout << arr[k] << " ";
    }

    cout << ", shifts = " << shift_count << endl;
  }
}
