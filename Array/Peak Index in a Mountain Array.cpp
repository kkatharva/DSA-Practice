// Problem: 852. Peak Index in a Mountain Array
// Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// Difficulty: Med
// Topic: Array, BinarySearch

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
	int s = 0;
	int e = arr.size() - 1;
	int m = s + (e-s)/2;
	while(s < e){
		if (arr[m] < arr[m+1]) {
            s = m+1;
        }
        else e = m;
        m = s + (e-s)/2;
	}
	return e;
}
};
