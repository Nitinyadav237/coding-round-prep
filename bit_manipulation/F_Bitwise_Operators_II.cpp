#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  long long AND = arr[0];
  long long OR = arr[0];
  long long XOR = arr[0];

  for (int i = 1; i < n; i++) {
    AND &= arr[i];
    OR |= arr[i];
    XOR ^= arr[i];
  }
  cout << AND << " " << OR << " " << XOR << endl;
}