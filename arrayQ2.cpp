/*
  Pascal's Triangle
Given an integer numRows, return the first numRows of Pascal's triangle.
*/

class Solution {
public:

//This works on the formula of (r-1)
//                                  C
//                                   (n-1)


   int find(int n,int j){
       long long int res=1;
       for(int i=0;i<j;i++){
           res=res*(n-i);
           res=res/(i+1);
       }
       return res;
   }

//Ncr find the element in a pascal traingle
//N-1 is a row and r-1 is a coloumn of the pascal Traingle
//It find the element at that position in a pacal traingle by given row and coloumn by help of ncr

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>v1;
        for(int i=1;i<=numRows;i++){
            v1.clear();
            for(int j=1;j<=i;j++){
                int aa=find(i-1,j-1);
                v1.push_back(aa);
            }
            v.push_back(v1);
        }
        return v;
    }
};


//TIME AND SPACE COMPLEXITY IS O(N^2)
