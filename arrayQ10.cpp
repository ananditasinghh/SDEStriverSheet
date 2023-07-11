/*

Search a 2D Matrix

Medium

You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.

The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

//row and col are initialized 

        int rows = matrix.size();
        int cols = matrix[0].size();

//i = 0; and here j = 3 
//[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3

        int i = 0;
        int j = cols - 1;
        
        while (i < rows && j >= 0) {

            if (matrix[i][j] == target) {
                return true;}
                
                 else if (matrix[i][j] > target) {
//this means we compare the end value in row , i.e matrix[0][3] which is 7 and hence, if 7 > 3 then we will continue in finiding in the same row, else we will go to the next one 
                j--;
            } else {
                i++;
            }
        }
        
        return false;
    }
};
