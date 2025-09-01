class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        int n = s.length();

        // Step 1: Count frequency of each character
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        // Step 2: Find first index with frequency 1
        for(int i=0;i<n;i++){
            if(mp[s[i]] == 1){
                return i;
            }
        }

        return -1; // no unique character found
    }
};
