#include <bits/stdc++.h>
using namespace std;

void my_swap(char& ch1, char& ch2) {
  char temp = ch1;
  ch1 = ch2;
  ch2 = temp;
}
int main() {
  string s;
  getline(cin, s);

  int i = 0, j = s.size() - 1;

  while (i < j) {
    my_swap(s[i], s[j]);
    i++;
    j--;
  }
  cout << s << endl;
}