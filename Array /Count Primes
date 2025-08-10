// Problem: 204. Count Primes
// Link: https://leetcode.com/problems/count-primes/description/
// Difficulty: Medium
// Topic: Array, Math, Number Theory
// Time Complexity: O(n*log(logn))


class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> isPrime(n+1,true);
        isPrime[0] = isPrime[1] = false;
        for(int i = 2; i<n; i++){
            if(isPrime[i]){
                count++;
                for(int j = i*2; j<n; j+=i){
                    isPrime[j] = false;
                }
            }
        }
        return count;
    }
};
