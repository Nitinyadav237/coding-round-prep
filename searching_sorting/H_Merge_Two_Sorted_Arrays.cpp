#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr1[n];
  int arr2[m];
  int merged_arr[n + m];

  for (int i = 0; i < n; i++) {
    cin >> arr1[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> arr2[i];
  }
  int i = 0, j = 0, k = 0;
  while (i < n and j < m) {
    if (arr1[i] < arr2[j]) {
      merged_arr[k] = arr1[i];
      i++;
    } else {
      merged_arr[k] = arr2[j];
      j++;
    }
    k++;
  }
  while (i < n) {
    merged_arr[k] = arr1[i];
    i++;
    k++;
  }
  while (j < m) {
    merged_arr[k] = arr2[j];
    j++;
    k++;
  }

  for (int l = 0; l < n + m; l++) {
    cout << merged_arr[l] << " ";
  }
}