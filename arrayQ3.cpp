/*
Question 3 : Next Permutation
Medium

A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

*/

/*

Approach 1

Brute force is first find all the permutations and then do a linear search and find the number and return the string next to it.

APPROACH 2

C++ STL solution can be also implemented which says 
next_permuation = (nums.begin(), nums.end())
return nums 

This has inbuilt function which solves the probelem for you

Approach 3 

It is the optimal approach with following steps :

Step 1 : It is to find the longest prefix match, i.e the next_permutation should be of larger value than the previous one. Ex - [2 1 5 4 3 0 0]

Now the breaking point is 1 i.e [2 1 / 5 4 3 0 0]

Step 2 : It is to find the breaking point and then replacing it with a greater character but smaller than the others 

Now replace 1 with 3 i.e [2 3 / 5 4 1 0 0]

Step 3 : It is to sort the remaining array in the smallest way possible i.e 

[2 3 0 0 1 4 5]

*/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), index = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }
        for(int i=n-1; i>=index && index != -1; i--){
            if(nums[i] > nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin() + index + 1, nums.end());
    }
};


//Time Complexity is O(n)
//Space Cpmplexity is O(1)
