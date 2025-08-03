// Problem: 88. Merge Sorted Array
// Link: https://leetcode.com/problems/merge-sorted-array/description/
// Difficulty: Easy
// Topic: Array, Sorting, Two Pointer

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        while(j >= 0){
            if(i >=0 && nums1[i]<=nums2[j]){
                nums1[k] = nums1[i];
                i--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        sort(nums1.begin(), nums1.end());
    }
};
