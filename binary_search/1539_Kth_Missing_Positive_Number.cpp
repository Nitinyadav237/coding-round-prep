#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int missing_num=arr[mid]-(mid+1);
            if(missing_num<k){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return l+k;
    }
};

int main() {
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;

    Solution obj;
    cout << obj.findKthPositive(arr, k) << endl;

    return 0;
}