class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int early=INT_MAX;
        for(int i=0;i<landStartTime.size();i++){
            int time=landStartTime[i]+landDuration[i];
            for(int j=0;j<waterStartTime.size();j++){
                if(time>=waterStartTime[j])
                    early=min(early,time+waterDuration[j]);
                else
                    early=min(early, waterStartTime[j]+waterDuration[j]);
            }
        }
        for(int i=0;i<waterStartTime.size();i++){
            int time=waterStartTime[i]+waterDuration[i];
            for(int j=0;j<landStartTime.size();j++){
                if(time>=landStartTime[j])
                    early=min(early,time+landDuration[j]);
                else
                    early=min(early, landStartTime[j]+landDuration[j]);
            }
        }
        return early;
    }
};