class Solution {
public:
    int countTriples(int n) {
        int a=1,b,c,cnt=0;
        for(int i=a;i<=n;i++){
            a=i*i;
            for(int j=1;j<=n;j++){
                b=j*j;
                for(int k=1;k<=n;k++){
                    c=k*k;
                    if(a+b==c){
                        cnt++;
                        break;
                    }
                }
            }
        }
        return cnt;
    }
};