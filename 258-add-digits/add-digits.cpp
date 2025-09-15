class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;       // special case
        return num % 9 ? num % 9 : 9; // digital root formula
    }
};