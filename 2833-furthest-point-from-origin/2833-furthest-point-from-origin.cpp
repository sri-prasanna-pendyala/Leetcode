class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lcnt=0,rcnt=0,other=0;
        for(char c:moves){
            if(c=='L')
                lcnt++;
            else if(c=='R')
                rcnt++;
            else
                other++;
        }
        if(lcnt>rcnt)
            return lcnt+other-rcnt;
        return rcnt+other-lcnt;
    }
};