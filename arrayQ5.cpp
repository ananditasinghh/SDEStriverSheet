Sort Colors

Medium

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

/*
this is a good approah but is only for c++ so its not optimal 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        return sort(nums.begin(), nums.end());  
    }
};

*/

/*

This is a Dutch National Flag Algorithm 

IT IS A 3 WAY PARTITONING, WHERE 
0 TO LOW - 1 IS 0's
LOW TO MID - 1 IS 1's
HIGH TO N-1 IS 2's

0'S SHOULD BE BEFORE LOW POINTER, 
2'S SHOULD BE AFTER HIGH POINTER
AND 1'S SHOULD BE IN BETWEEN THE TWO POINTERS

NOW SWAP THE POSITIONS ACCORDINGLY 

*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

//Time complexity: O(n)
//Space complexity: O(1)
