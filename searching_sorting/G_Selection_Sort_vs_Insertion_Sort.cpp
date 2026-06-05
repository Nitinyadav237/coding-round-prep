#include <bits/stdc++.h>
using namespace std;

int insertion_sort(int arr[], int n) {
  int shift_count = 0;
  for (int i = 1; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 and arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
      shift_count++;
    }
    arr[j + 1] = temp;
  }
  return shift_count;
}

int selection_sort(int arr[], int n) {
  int swap_count = 0;
  for (int i = 0; i < n - 1; i++) {
    int min_value = arr[i];
    int location = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < min_value) {
        min_value = arr[j];
        location = j;
      }
    }
   if (location != i) {
    swap(arr[i], arr[location]);
    swap_count++;
}
  }
  return swap_count;
}

void G_Selection_Sort_vs_Insertion_Sort() {
  int n;
  cin >> n;
  int arr[n];
  int arr1[n], arr2[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    arr1[i] = arr[i];
    arr2[i] = arr[i];
  }

  int insertion_shift_count = insertion_sort(arr1, n);
  int selection_swap_count = selection_sort(arr2, n);

  if (insertion_shift_count < selection_swap_count) {
    cout << "Insertion Sort" << endl;
  } else if (insertion_shift_count > selection_swap_count) {
    cout << "Selection Sort" << endl;
  } else {
    cout << "Tie"<<endl;
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    G_Selection_Sort_vs_Insertion_Sort();
  }
}
