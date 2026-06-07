#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int start_row = 0, end_row = n - 1;
  int start_col = 0, end_col = m - 1;

  while (start_row <= end_row and start_col <= end_col) {
    // first row=0 j=0->n
    for (int j = start_col; j <= end_col; j++) {
      cout << arr[start_row][j] << " ";
    }

    // second col=m-1 i=1->n
    for (int i = start_row + 1; i <= end_row; i++) {
      cout << arr[i][end_col] << " ";
    }
    // last row=n-1 ,j=m-2->0
    if (start_row != end_row) {
      for (int j = end_col - 1; j >= start_col; j--) {
        cout << arr[end_row][j] << " ";
      }
    }

    // first col =0 ,i=n-2,1
    if (start_col != end_col) {
      for (int i = end_row - 1; i >= start_row + 1; i--) {
        cout << arr[i][start_col] << " ";
      }
    }
    start_row++;
    end_row--;
    start_col++;
    end_col--;
  }
}