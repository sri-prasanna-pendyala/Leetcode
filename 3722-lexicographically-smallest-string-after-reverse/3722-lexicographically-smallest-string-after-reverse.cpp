class Solution {
public:
    string lexSmallest(string s) {
        string front=s,back=s,ans="zyxwvutsrqponmlkjihgfedcba";
        int k=1;
        for(int i=0;i<s.size();i++){
            front=s;
            back=s;
            reverse(front.begin(),front.begin()+i+1);
            ans=min(ans,front);
            reverse(back.rbegin(),back.rbegin()+k);
            ans=min(ans,back);
            k++;
        }
        return ans;
    }
};