class Solution {
public:
    int reverse(int x) {
    string s = to_string(x);
    int start = 0;
    bool isNegative = false;

    // Handle negative numbers
    if (s[0] == '-') {
        start = 1;
        isNegative = true;
    }

    // Reverse the numeric part of the string
    int end = s.length() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    // Add negative sign back if needed
    if (isNegative) {
        s = '-' + s.substr(1); // Keep the reversed digits only
    }

    // Try converting to int, catch overflow
    try {
        int ans = stoi(s);
        return ans;
    } catch (...) {
        return 0; // Overflow occurred
    }
}

};