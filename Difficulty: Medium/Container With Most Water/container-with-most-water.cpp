//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int maxwater=0;
        int lp=0,rp=arr.size()-1;
        while(lp<rp)
        {
            int w=rp-lp;
            int ht=min(arr[lp],arr[rp]);
            int currentw=w*ht;
            maxwater=max(maxwater,currentw);
            arr[lp]<arr[rp]? lp++ : rp--;
        }
        return maxwater;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends