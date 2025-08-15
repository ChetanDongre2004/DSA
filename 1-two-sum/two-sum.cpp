class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int> mp;
        int n=nums.size();
        vector<int> ans;

        int curr;
        int find;
        for(int i=0;i<n;i++){
            curr=nums[i];
            find=target-curr;
            if(mp.find(find)!=mp.end()){
                ans.push_back(mp[find]);
                ans.push_back(i);
                return ans;
            }
             mp[curr] = i;

        }
        return ans;

        
    }
};