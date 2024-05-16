// Striver Arrays ____ Easy Problems Solution of all brute force , optimal

//2->
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    int max=INT_MIN;
	    int secMax=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            secMax=max;
	            max=arr[i];
	        }else if(secMax<=arr[i] && max!=arr[i]){
	            secMax=arr[i];
	        }
	    }
	    if(max==secMax || secMax==INT_MIN){
	        return -1;
	    }
	    return secMax;
	}
    //Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
    bool check(vector<int>& nums) {
       int count =0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]>nums[(i+1)%nums.size()]){count++;}
        if(count>1){
            return false;
        }
       }
        return true;

    }
};
