class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=grid.size(), cols=grid[0].size();
        vector<int> v(rows*cols,0);
        int n=rows*cols;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                int idx= (i*cols) + j;
                v[(idx + k) %n] = grid[i][j];
            }
        }
        int x=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j]=v[x++];
            }
        }
        return grid;
    }
};