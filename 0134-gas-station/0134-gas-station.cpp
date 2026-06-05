class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0,totalcost=0;
        int tank=0,totaltank=0,ans=0;
        for(int i=0;i<gas.size();i++){
            tank+=gas[i]-cost[i];
            totaltank+=gas[i]-cost[i];
            if(tank<0){
                tank=0;
                ans=i+1;
            }
        }
        if(totaltank<0) return -1;
        return ans;
    }
};