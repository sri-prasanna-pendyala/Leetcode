class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        // reduce k shifts to (k % n) shifts as after n shifts the matrix will 
        // become similar to the initial matrix.
        // Acc to this we can also check if the mat[i][j]==mat[i][(j+k)%n](rotation logic)
        // and if it is not equal then even if we shift the array (k % n) these times
        // the ans will still be false so, this check simply avoids many loops & shifts
        int n=mat[0].size();
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]!=mat[i][(j+k)%n])
                    return false;
            }
        }
        return true;
    }
};