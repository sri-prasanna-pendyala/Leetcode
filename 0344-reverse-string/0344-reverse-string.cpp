class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()/2;
        int i=0,j=s.size()-1;
        while(i<n){
            char temp=s[i];
            s[i++]=s[j];
            s[j--]=temp;
        }
    }
};