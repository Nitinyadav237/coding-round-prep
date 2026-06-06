#include <bits/stdc++.h>
using namespace std;

void my_swap(int& num1, int& num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}
void push_zeros_end() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int left = 0;
  for (int right = 0; right < n; right++) {
    if (arr[right] != 0) {
      my_swap(arr[left], arr[right]);
      left++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    push_zeros_end();
  }
}

