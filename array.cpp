/*
    STRIVER SHEET CHALLENGE 

Arrays Part 1 

QUESTION 1 :

Set Matrix Zeroes
(Medium)

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

*/


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

//make unordered set of integers in the matrix itself 

        unordered_set<int> setrows;
        unordered_set<int> setcolumns;

//Now here whenever we encounter any 0 in the matrix the set row and set column will be marked as 0

        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m ; j++){
                if(matrix[i][j] == 0){
                    setrows.insert(i);
                    setcolumns.insert(j);
                }
            }
        }

//Now if the setrow and setcolumn will have count greater than 0, then the corresponding [i][j] position in matrix will be marked as 0

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(setrows.count(i) > 0 || setcolumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }

    }
};

//TIME COMPLEXITY IS O(N*M) BECAUSE OF TWO NESTED LOOPS 
//SPACE COMPLEXITY IS O(1), CONSTANT SPACE 
