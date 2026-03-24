class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int sum=0,dup;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
                sum+=grid[i][j];
                if(mp[grid[i][j]]==2)
                    dup=grid[i][j];
            }
        }
        int n=grid.size()*grid[0].size();
        int naturalsum=(n*(n+1))/2;
        int value=abs(naturalsum-sum+dup);
        return {dup,value};
    }
};