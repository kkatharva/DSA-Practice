// Problem: 1009. Complement of Base 10 Integer
// Link: https://leetcode.com/problems/complement-of-base-10-integer/description/
// Difficulty: Easy
// Topic: Bit Manupulation

class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        if(n == 0) return 1;
        int mask = 0;
        while(m != 0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int result = (~n) & mask;
        return result;
    }
};
