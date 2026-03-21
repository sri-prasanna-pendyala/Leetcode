class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) { 
    int top=x,bottom=top+k-1;
    while(top<bottom){
        int cnt=0,j=y;
        while(cnt<k){
            swap(grid[top][j],grid[bottom][j]);
            j++;
            cnt++;
        }
        bottom--;
        top++;
    } 
    return grid;
    }
};