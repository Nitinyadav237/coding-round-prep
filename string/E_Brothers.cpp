#include <bits/stdc++.h>
using namespace std;

int main() {
  string first_name_1, last_name_1;
  cin >> first_name_1 >> last_name_1;
  string first_name_2, last_name_2;
  cin >> first_name_2 >> last_name_2;

  if (last_name_1 == last_name_2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}