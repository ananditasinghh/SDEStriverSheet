/*

Merge Intervals

Medium

Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping

intervals that cover all the intervals in the input.

*/



class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

//FIRST SORT THE ARRAY
//THEN COMPARE IF THE INTERVAL THE END POINT IS GREATER THAN THE STARTING POINT OF THE THE OTHER INTERVAL THAN MERGE 

        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++){

            if(ans.back()[1] >= intervals[i][0])

            ans.back()[1] = max(ans.back()[1], intervals[i][1]);

            else ans.push_back(intervals[i]);
        }

        return ans;
    }
};
