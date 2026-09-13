#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int left,right,mid;
       left=0;
       right=nums.size()-1;
       while(left <= right){
        mid=(left+right)/2;
       if(target==nums[mid]){
        return mid;
       }else if(target > nums[mid]){
        left=mid +1 ;
       } else {
        right=mid-1;
       }
    }
       return -1;


    }
};