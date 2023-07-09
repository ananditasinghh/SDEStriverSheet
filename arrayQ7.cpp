/*
Rotate Image

Medium

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
*/

#include<bits/stdc++.h>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
      
//TRANSPOSE OF THE MATRIX :
//TIME COMPLEXITY IS O(n/2 * n/2)
      
        for(int i = 0; i < n-1 ; i++){
            for(int j = i + 1 ; j < n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
      
//REVERSE OF THE MATRIX 
//TIME COMPLEXITY IS O(n * n/2)
      
        for(int i = 0; i < n ; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
