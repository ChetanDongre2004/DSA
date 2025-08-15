class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i = 0; i < n; i++) {
            int curr = nums[i];
            if(mp.find(curr) != mp.end()) {
                return true; // Duplicate found
            }
            mp[curr] = 1; // Mark number as seen
        }
        
        return false; // No duplicates found
    }
};
