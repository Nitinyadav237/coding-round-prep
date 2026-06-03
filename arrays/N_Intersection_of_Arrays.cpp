#include <bits/stdc++.h>
using namespace std;

void intersection_array(){
    int n;
    cin >>n;
    int arr1[n];

    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
     int m;
    cin >>m;
    int arr2[m];

    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
                arr2[j] = -1;
                break;
            }
        }
    }
    cout << endl;
}


int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    intersection_array();
  }
}