class Solution {
public:
    int reverseDegree(string s) {
        int sum=0,ascii,revdeg;
        for(int i=0;i<s.size();i++){
            ascii=s[i]-96;  //'a'-96--> 97-96 --> 1 (it's the integer)
            revdeg=27-ascii;    // 27-1=26 (rev degree of 'a')
            sum+=revdeg*(i+1);  //as index starts with 0
        }
        return sum;
    }
};