class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0,word=0;
        for(auto c:s){
            if(c==' '){
                word=1;
            }
            else if(c!=' ' && word>0){
                cnt=1;
                word=0;
            }
            else
                cnt++;
        }
        return cnt;
        // if(s.size()==1 && s[0]!=' ')
        //     return 1;
        // int cnt=1;
        // for(int i=s.size()-1;i>=0;i--){
        //     //continue if space is there
        //     if(s[i]==' ')
        //         continue;
        //     //if any character encounters then we check whether there is space before
        //     //if space is there and cnt>0 then the char is another word
        //     else if(s[i-1]==' ' && cnt>0)
        //         break;
        //     else
        //         cnt++;
        // }
        // return cnt;
    }
};