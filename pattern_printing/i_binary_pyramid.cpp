// I. Binary Pyramid
//  0
//  10
//  010
//  1010
//  01010
//  101010

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    // int num;
    // if (i % 2 != 0) {
    //   num = 0;
    // } else {
    //   num = 1;
    // }
    int num=(i%2==0)? 1: 0;

    for (int j = 1; j <= i; j++) {
      cout << num ;
      num=1-num; // 1-0=1 1-1=0
    }
    cout << endl;
  }
}