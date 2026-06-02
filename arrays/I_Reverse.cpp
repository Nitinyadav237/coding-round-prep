#include<bits/stdc++.h>
using namespace std;

void my_swap(int &num1,int &num2){
    int temp=num1;
    num1=num2;
    num2=temp;
}
int main(){
    int n;
    cin >>n;
    int arr[n];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int i=0 ,j=n-1;
    while(i<=j){
        my_swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}