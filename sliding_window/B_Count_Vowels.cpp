#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' ||
         c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  // first half
  int count = 0;
  for (int i = 0; i < k; i++) {
    if (is_vowel(s[i])) {
      count++;
    }
  }
  cout << count << " ";
  // second half
  for (int i = k; i < n; i++) {
    // include
    if (is_vowel(s[i])) {
      count++;
    }
    if (is_vowel(s[i - k])) {
      count--;
    }
    cout << count << " ";
  }
}