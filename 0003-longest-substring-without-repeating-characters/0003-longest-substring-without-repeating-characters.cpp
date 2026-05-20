class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> seen;
        int l=0, r=0, longest=0, n;
        while(r<s.size() && l<=r){
            if(seen.contains(s[r])){
                n=r-l;
                longest= max(longest, n);
                if(seen[s[r]]>=l)
                    l=seen[s[r]]+1;
            }
            seen[s[r]]=r;
            r++;
        }
        longest= max(longest, r-l);
        return (longest==INT_MIN)?1:longest;
    }
};