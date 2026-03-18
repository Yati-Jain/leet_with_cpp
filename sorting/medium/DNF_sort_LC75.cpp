#include <bits/stdc++.h>
using namespace std;
 void swap(vector<int>& arr, int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums, low, mid);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{ // nums[mid] == 2
                swap(nums, mid, high);
                high--;
            }
        }
    }

    int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    cout << "Sorted array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}