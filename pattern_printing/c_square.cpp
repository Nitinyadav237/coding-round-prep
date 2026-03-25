// C. Square
// Print an n×n square of stars.
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n ;
  for (int i = 0; i < n; i++) {
    for (int j=0;j<n;j++){
        cout << "*" ;
    }
    cout << endl;
  }
}
