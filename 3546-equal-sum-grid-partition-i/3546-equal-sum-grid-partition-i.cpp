class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long sum=0;
        for(long long i=0;i<grid.size();i++){
            for(long long j=0;j<grid[i].size();j++){
                sum+=grid[i][j];
            }
        }
        if(sum%2!=0)return false;
        long long rowsum=0;
        for(long long i=0;i<grid.size();i++){
            for(long long j=0;j<grid[i].size();j++){
                rowsum+=grid[i][j];
            }
            if(rowsum==(sum/2))
                return true;
        }
        long long colsum=0;
        for(long long j=0;j<grid[0].size();j++){
            for(long long i=0;i<grid.size();i++){
                colsum+=grid[i][j];
            }
            if(colsum==(sum/2))
                return true;
        }
        return false;
    }
};