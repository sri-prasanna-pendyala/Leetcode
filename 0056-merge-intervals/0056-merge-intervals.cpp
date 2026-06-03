class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        int i=1,start=intervals[0][0],end=intervals[0][1];
        while(i<intervals.size()){
            if(intervals[i][0]>end){
                res.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else{
                end=max(end,intervals[i][1]);
            }
            i++;
        }
        res.push_back({start,end});
        return res;
    }
};