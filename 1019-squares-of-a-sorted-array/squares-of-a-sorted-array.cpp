class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
         int n=nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            int leftsq = nums[left] * nums[left];
            int rightsq = nums[right] * nums[right];

            if (leftsq > rightsq) {
                result[pos] = leftsq;
                left++;
            } else {
                result[pos] = rightsq;
                right--;
            }
            pos--;     
        }

        return result;
    }
};