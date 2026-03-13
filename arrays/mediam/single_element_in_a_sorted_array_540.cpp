#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int st = 0, end = nums.size() - 1;

    while (st < end) {
        int mid = (st + end) / 2;

        if (mid % 2 == 1)
            mid--;  

        if (nums[mid] == nums[mid + 1])
            st = mid + 2;
        else
            end = mid;
    }

    return nums[st];
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    int result = singleNonDuplicate(nums);

    cout << "Single element: " << result << endl;

    return 0;
}