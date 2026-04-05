class Solution {
public:
    bool judgeCircle(string moves) {
        int rcnt=0,ucnt=0;
        for(char c:moves){
            if(c=='U')
                ucnt++;
            else if(c=='D')
                ucnt--;
            else if(c=='R')
                rcnt++;
            else
                rcnt--;
        }
        return ucnt==0 && rcnt==0;
    }
};