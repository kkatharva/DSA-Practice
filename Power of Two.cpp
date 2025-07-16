// Problem: 231. Power of Two
// Link: https://leetcode.com/problems/power-of-two/description/
// Difficulty: Easy
// Topic: Bit Manupulation, Math


class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x = 0;
        
        while(pow(2, x) <= n){
            if(pow(2, x) == n) {
                return true;
            }
            x++;
        }
        return false;
    }
};
