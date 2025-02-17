
//problem Link:https://leetcode.com/problems/3sum-closest/

//Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum;
        int result=0;
        int diff = INT_MAX;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
           int a = i+1;
           int b = n-1;
           while(a<b){
               sum = nums[i]+nums[a]+nums[b];
               int k = abs(sum-target);
               if(k<diff){
                   diff = k;
                   result = sum;
               }if(sum == target)
                    return target;
                else if(sum<target)
                   a++;
                else
                   b--;
           }
        }
        return result; 
    }
};
