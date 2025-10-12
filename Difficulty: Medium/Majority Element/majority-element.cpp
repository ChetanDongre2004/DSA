class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        map<int,int> mpp;
        int n = arr.size();

        // Count frequencies
        for(int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }

        // Find element with count > n/2
        for(auto it : mpp) {
            if(it.second > (n / 2))
                return it.first;
        }

        // ✅ Add a return statement for cases with no majority
        return -1; 
    }
};
