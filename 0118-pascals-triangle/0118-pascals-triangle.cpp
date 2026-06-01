class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows,col=1,val=1;
        vector<vector<int>> pascal(numRows);
        for(int i=0;i<n;i++){
            for(int j=0;j<col;j++){
                if(col<3 || j==0 || j==col-1)
                    pascal[i].push_back(val);
                else{
                    pascal[i].push_back(pascal[i-1][j-1]+pascal[i-1][j]);
                }
            }
            col++;
        }
        return pascal;
    }
};