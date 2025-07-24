#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int k){
	int m = s + (e - s)/2;

	while(s <= e){
		if(arr[m] == k) return m;

		if(arr[m] < k) s = m + 1;

		else e = m - 1;

		// To tackle range of int
		m = s + (e - s)/2;
	}
	return -1;
}

int getPivot(int arr[], int n){
	int s = 0;
	int e = n - 1;
	int m = s + (e-s)/2;
	while(s < e){
		if(arr[m] >= arr[0]){    
			s = m + 1;
		}
		else e = m; // To find another pivot point use e = m - 1
		m = s + (e - s)/2;
	}
	return s;
}

int main(){
	int arr[5] = {5,13,1,2,4};
	int pivot = getPivot(arr, 5);
  // Replace k with any element from the array 
	if(k >= arr[pivot] && k <= arr[n - 1] ) cout<< binarySearch(arr, pivot, n, k); // Properly put start(s) and end(e) values
	else cout<<binarySearch(arr, 0, pivot - 1, k);
}
