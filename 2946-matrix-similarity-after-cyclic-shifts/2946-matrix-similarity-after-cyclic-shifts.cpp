class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        // brute force by shifting array (k%n) times
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> ans(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=mat[i][j];
            }
        }
        for(int z=0;z<(k%n);z++){
            for(int i=0;i<m;i++){
                if(i%2==0){
                    int ele=ans[i][0];
                    for(int j=0;j<n-1;j++)
                        ans[i][j]=ans[i][j+1];
                    ans[i][n-1]=ele;
                }
                else{
                    int ele=ans[i][n-1];
                    for(int j=n-1;j>0;j--)
                        ans[i][j]=ans[i][j-1];
                    ans[i][0]=ele;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]!=mat[i][j])
                    return false;
            }
        }
        return true;

        // reduce k shifts to (k % n) shifts as after n shifts the matrix will 
        // become similar to the initial matrix.
        // Acc to this we can also check if the mat[i][j]==mat[i][(j+k)%n](rotation logic)
        // and if it is not equal then even if we shift the array (k % n) these times
        // the ans will still be false so, this check simply avoids many loops & shifts
        //int n=mat[0].size();
        // for(int i=0;i<mat.size();i++){
        //     for(int j=0;j<mat[i].size();j++){
        //         if(mat[i][j]!=mat[i][(j+k)%n])
        //             return false;
        //     }
        // }
        // return true;
    }
};