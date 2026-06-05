#include <bits/stdc++.h>
using namespace std;

int main() {
  string word_A, word_B;
  cin >> word_A >> word_B;

  if (word_A < word_B) {
    cout << "A" << endl;
  } else if (word_A > word_B) {
    cout << "B" << endl;
  } else {
    cout << "Equal" << endl;
  }
}