#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  int i = 0;
  int max_count = 0;
  int n = s.size();
  while (i < n) {
    if (s[i] == ' ') {
      i++;
      continue;
    }
    int j = i;
    int count = 0;
    while (j < n and s[j] != ' ') {
      count++;
      j++;
    }
    if (max_count < count) {
      max_count = count;
    }
    i = j;
  }
  cout << max_count << endl;
}