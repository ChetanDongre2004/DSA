class Solution {
public:
    int findClosest(int x, int y, int z) {
        int d1 = abs(z - x); // distance of Person 1
        int d2 = abs(z - y); // distance of Person 2
        
        if (d1 < d2) return 1;
        else if (d2 < d1) return 2;
        else return 0;  // both arrive at same time
    }
};
