class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // optimised sol with O(N) TC but with O(256) space
        int maxlen=0;
        unordered_map<char,int> mp;
        for(char c:s)mp[c]=-1;
        int l=0,r=0;
        while(r<s.size()){
            if(mp[s[r]]!=-1){
                if(mp[s[r]]>=l) // check whether found char is within window or not
                    l=mp[s[r]]+1;
            }
            mp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }

        //brute force logic with O(n^2) TC
        // if(s.size()==0)
        //     return 0;
        // else if(s.size()<2)
        //     return 1;
        // for(int i=0;i<s.size();i++){
        //     if(count(vec.begin(),vec.end(),s[i])){
        //         for(int j=0;j<vec.size();j++){
        //             if(vec[j]==s[i]){
        //                 vec.erase(vec.begin()+j);
        //                 vec.push_back(s[i]);
        //                 break;
        //             }
        //             else{
        //                 vec.erase(vec.begin());
        //                 j--;
        //             }
        //         }
        //     }
        //     else{
        //         vec.push_back(s[i]);
        //         maxlen=max(maxlen,(int)vec.size());
        //     }
        // }
        // maxlen=max(maxlen,(int)vec.size());
        return maxlen;
    }
};