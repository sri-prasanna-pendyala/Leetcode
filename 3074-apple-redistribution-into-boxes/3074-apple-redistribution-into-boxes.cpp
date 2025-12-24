class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0,box=0,cnt=0;
        for(int i=0;i<apple.size();i++)
            sum+=apple[i];
        sort(capacity.begin(),capacity.end());
        for(int j=capacity.size()-1;j>=0;j--){
            sum-=capacity[j];
            cnt++;
            if(sum<=0)
                return cnt;
        }
        return cnt;
    }
};