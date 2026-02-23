# include <bits/stdc++.h>
using namespace std; 
int single_number(vector<int>& nums){
    int ans = 0;
    for(int val:nums){
        ans = ans^val;
    }
    return ans;
}

int main(){
    int n; 
    cout<< "Enter size of  arrray";
    cin>> n;
    vector<int> nums(n);
    cout<< "Enter elements";
    for(int i= 0; i< n; i++){
        cin>> nums[i];
    }
    int result = single_number(nums);
    cout<< result;
    return 0;
}