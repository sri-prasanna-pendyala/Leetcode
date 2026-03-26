class Solution {
public:
    int strStr(string haystack, string needle) {
        //using two pointer approach
        int i=0,j=0,cnt=0;
        while(j<needle.size() && i<haystack.size()){
            if(haystack[i]==needle[j]){
                cnt++;
                j=j+1;
            }
            else{
                j=0;
                i-=cnt;
                cnt=0;
            }
            i++;
        }
        return (j==needle.size())?abs(j-i):-1;
        // return haystack.find(needle); using string method
    }
};