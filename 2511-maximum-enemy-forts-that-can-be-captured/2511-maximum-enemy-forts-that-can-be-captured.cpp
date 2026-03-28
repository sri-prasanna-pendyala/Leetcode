class Solution {
public:
    int captureForts(vector<int>& forts) {
        int cnt=0,maxcnt=INT_MIN,start=0,end=0;
        for(int i=0;i<forts.size();i++){
            // when the 1 is found after the -1 then we've to consider the zeros in b/w
            // and the starting point has to be set and close the ending point
            if(forts[i]==1 && end==1){
                start=1;
                end=0;
                maxcnt=max(cnt,maxcnt);
                cnt=0;
            }
            //if the 1 is found but there is no -1 before it, we don't consider 0 in b/w
            else if(forts[i]==1 && end==0){
                start=1;
                cnt=0;
            }
            // same like above, we check the 0 b/w -1 to 1 range and set the points
            else if(forts[i]==-1 && start==1){
                end=1;
                start=0;
                maxcnt=max(cnt,maxcnt);
                cnt=0;
            }
            // if we are getting end points again with no start points in b/w, 
            // we don't consider the 0 in b/w
            else if(forts[i]==-1 && start==0){
                end=1;
                cnt=0;
            }
            //if we get zeros after either start or end point we increment cnt
            else if(forts[i]==0 && (start==1 || end==1))
                cnt++;
            // if we get zeros with no start or end point we reset start & end
            else{
                start=0;
                end=0;
            }
        }
        return (maxcnt==INT_MIN)?0:maxcnt;
    }
};