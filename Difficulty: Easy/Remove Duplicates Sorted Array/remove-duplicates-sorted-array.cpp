class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return {};

        int i = 0; // slow pointer
        for (int j = 1; j < n; j++) {
            if (arr[j] != arr[i]) {
                i++;
                arr[i] = arr[j];
            }
        }

        // Resize the array to keep only unique elements
        arr.resize(i + 1);
        return arr;
    }
};
