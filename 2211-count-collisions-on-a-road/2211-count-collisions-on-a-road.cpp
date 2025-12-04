class Solution {
public:
    int countCollisions(string directions) {
        int n=directions.size()-1;
        int l=0,r=n,tot=0;
        if(n<1)
            return 0;
        // for(char c:directions){
        //     if(c=='L')
        //         lcnt++;
        //     else if(c=='R' || c=='S')
        //         break;
        // }
        // for(int i=n;i>=0;i--){
        //     if(directions[i]=='R')
        //         rcnt++;
        //     else if(directions[i]=='L' || directions[i]=='S')
        //         break;
        // }
        while(l<n && directions[l]=='L')
            l++;
        while(r>=0 && directions[r]=='R')
            r--;
        for(int i=l;i<=r;i++){
            if(directions[i]!='S')
                tot++;
        }
        return tot;
    }
};