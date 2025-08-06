class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        // Store the original value and index
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; ++i) {
            arr.push_back({nums[i], i});
        }

        // Sort the array by value
        sort(arr.begin(), arr.end());

        // Apply two-pointer technique
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = arr[left].first + arr[right].first;
            if (sum == target) {
                // Return the original indices
                return {arr[left].second, arr[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {}; // if no pair is found
    }
};
