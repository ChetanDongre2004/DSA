class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) { // start from i+1
                if(nums[i] + nums[j] == target) {
                    return {i, j}; // ✅ correct return
                }
            }
        }
        return {}; // in case no solution is found
    }
};
