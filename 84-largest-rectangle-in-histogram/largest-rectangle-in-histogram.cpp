class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        vector<int> left(n, 0);   // NSL
        vector<int> right(n, 0);  // NSR
        stack<int> s;

        // NSR (Next Smaller to Right)
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                right[i] = n;
            } else {
                right[i] = s.top();
            }
            s.push(i);
        }

        // Clear the stack before NSL
        while (!s.empty()) {
            s.pop();
        }

        // NSL (Next Smaller to Left)
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            if (s.empty()) {
                left[i] = -1;
            } else {
                left[i] = s.top();
            }
            s.push(i);
        }

        // Calculate max area
        int max_area = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            max_area = max(max_area, area);
        }

        return max_area;
    }
};
