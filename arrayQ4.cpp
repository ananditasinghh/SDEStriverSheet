/* Maximum Subarray

Medium

Given an integer array nums, find the subarray with the largest sum, and return its sum.

*/


/*
  KADANE'S ALGORITHM QUESTION 

brute force is have 3 loops one i = 0; j = i and k = j now you have a subarray and now add the sum , check if its max but the time complexity is somewhere near O(n^3) which is ahhh bad
Kadane's Algo is an optimal solution which states that we will start from i = 0, abd keep the sum, if sum is less than 0 then it would be reset to 0 , beacuse -ve sum is of no use for us.

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int currentSum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        
        return maxSum;
    }
};

//TIME COMPLEXITY IS O(n);
//SPACE COMPLEXITY IS O(1);
