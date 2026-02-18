class Solution {
public:
    bool hasAlternatingBits(int n) {
        // Time : O(logn) space: O(logn)
        // string ans="";
        // while(n>0){
        //     int rem=n%2;
        //     ans.push_back('0'+rem);
        //     n/=2;
        // }
        // reverse(ans.begin(),ans.end());
        // int ele=ans[0];
        // for(int i=1;i<ans.size();i++){
        //     if(ans[i]==ele)
        //         return false;
        //     else
        //         ele=ans[i];
        // }
        // return true;

        //optimsed space complexity with O(1)
        // int rem=n%2;
        // n/=2;
        // while(n>0){
        //     if(rem==n%2)    return false;
        //     rem=n%2;
        //     n/=2;
        // }
        // return true;

        //optimsed approach with time & space O(1) using bit manipulation
        unsigned int bits=(n^(n>>1));
        return (bits&(bits+1))==0;
    }
};