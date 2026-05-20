class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> a(A.size()+1,0),b(B.size()+1,0),res;
        int cnt=0;
        for(int i=0; i<A.size(); i++){
            if(A[i]==B[i]){
                cnt++;
                res.push_back(cnt);
            }
            else if(A[i]!=B[i]){
                cnt+=a[A[i]]+b[B[i]];
                res.push_back(cnt);
                a[B[i]]++;
                b[A[i]]++;
            }
        }
        return res;
    }
};