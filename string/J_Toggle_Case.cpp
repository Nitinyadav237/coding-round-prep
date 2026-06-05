#include <bits/stdc++.h>
using namespace std;

int main() {
  string words;
  getline(cin, words);

  // A=65 a=97 diff=32
  for (int i = 0; i < words.size(); i++) {
    if (words[i] >= 'A' and words[i] <= 'Z') {
      words[i] += 32;
    } else {
      words[i] -= 32;
    }
  }
  cout << words << endl;
}