class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr1(26);
        vector<int> arr2(26);
        for(char ch : s){
            int number = ch-'a';
            arr1[number]++;
        }
        for(char ch1 : t){
            int number1 = ch1-'a';
            arr2[number1]++;
        }
        if(arr1==arr2){
            return true;
        }
        else{
            return false;
        }

        
        
    }
};