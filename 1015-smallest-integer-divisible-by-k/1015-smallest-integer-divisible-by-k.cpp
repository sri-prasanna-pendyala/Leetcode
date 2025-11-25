class Solution {
public:
    int smallestRepunitDivByK(int k) {
        __int128 n=1,prevn=0;
        if(k==1)    
            return 1;
        else if(k%2==0 || k%5==0)   
            return -1; 
        int cnt=1,ans=k;
        while(ans>0){
            if(n%k==0){
                return cnt;
            }
            else{
                n=((n*10)+1)%k;
                cnt++;
            }
            ans--;
        }
        return (n==1)?-1:cnt;
    }
};