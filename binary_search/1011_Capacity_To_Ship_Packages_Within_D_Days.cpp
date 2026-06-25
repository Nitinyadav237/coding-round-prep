#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool is_possible(vector<int>& weights, int capacity,int days){
        int curr_day=1;
        int curr_weight=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+curr_weight<=capacity){  //current weight(load) + next_load <= capacity
                curr_weight+=weights[i];
            }else{
                curr_day++;
                curr_weight=weights[i];
            }

        }
        return curr_day<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        int ans=-1;

        while(l<=r){
            int mid=l+(r-l)/2;
            if(is_possible(weights,mid,days)){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }

};