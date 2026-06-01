class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size()-1,i=n-3,cnt=0;
        int total=(n>=1)?cost[n]+cost[n-1]:cost[n];
        while(i>=0){
            if(cnt<2){
                total+=cost[i--];
                cnt++;
            }
            else{
                i--;
                cnt=0;
            }
        }
        return total;
    }
};