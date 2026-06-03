class Solution {
public:
    int finish(vector<int> ls,vector<int> ld,vector<int> ws, vector<int> wd){
        int mintime=INT_MAX, time=INT_MAX;
        for(int i=0;i<ls.size();i++){
            mintime=min(mintime, ls[i]+ld[i]);
        }
        for(int i=0;i<ws.size();i++){
            time=min(time, max(mintime, ws[i])+ wd[i]);
        }
        return time;
    }
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
       int landtime=INT_MAX,watertime=INT_MAX;
       landtime=finish(landStartTime, landDuration, waterStartTime, waterDuration);
       watertime=finish(waterStartTime,waterDuration,landStartTime,landDuration);
        return min(landtime, watertime);
    }
};