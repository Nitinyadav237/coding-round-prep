// B. M-Stars
// You are given two integers n and m
// . Your task is to print a rectangle pattern consisting of n rows and m columns, where each cell contains a star '*'.

// ******
// ******
// ******
// ******
// ******

#include <iostream>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j=0;j<m;j++){
        cout << "*" ;
    }
    cout << endl;
  }
}
