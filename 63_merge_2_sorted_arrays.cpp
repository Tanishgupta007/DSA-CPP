// coding ninjas 
#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int k = m+n-1;
	int i = m-1;
	int j = n-1;

	while(i>=0 && j>=0){
		if(arr1[i] > arr2[j]){
			arr1[k--] = arr1[i--];
		}else{
			arr1[k--] = arr2[j--];
		}
	}

	while(j>=0){
		arr1[k--] = arr2[j--];
	}
	return arr1;
}