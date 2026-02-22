/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/

# include <vector>
# include <iostream>
# include <unordered_map>
using namespace std;
class solution{
    public:
    vector<int> twosum(vector<int>& nums, int target ){
        unordered_map<int,int> np;
        for(int i = 0; i<nums.size(); i++){
            int needed = target - nums[i];
            if(np.find(needed)!= np.end()){
                return {np[needed], i};
            }
            np[nums[i]] = i;
            }
            return{};
        }
    };

    
int main() {
    solution s;

    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target: ";
    cin >> target;

    vector<int> result = s.twosum(nums, target);

    cout << "Output indices: ";
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}