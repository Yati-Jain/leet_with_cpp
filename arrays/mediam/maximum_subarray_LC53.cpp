# include <bits/stdc++.h>
using namespace std; 

int maxSubArray(vector<int>nums){
    int cursum = 0, max_sum = INT_MIN;
    for(int val: nums){
        cursum += val;
        max_sum = max(cursum, max_sum);
        if(cursum<0){
            cursum = 0;
        }
    }
    return max_sum;
}

int main(){
    int n;
    cin>> n;
    vector<int> nums(n);
    cout<< "enter elements";
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    cout<< maxSubArray(nums);
    return 0;
}