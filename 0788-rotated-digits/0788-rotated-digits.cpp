class Solution {
public:
    int isvalid(int i){
        if(i==3 || i==4 || i==7)
            return -1;
        else{
            if(i==2)
                return 5;
            else if(i==5)
                return 2;
            else if(i==6)
                return 9;
            else if(i==9)
                return 6;
        }
        return i;
    }
    int rotatedDigits(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
            int rem,rot,place=1;
            long long res=0;
            bool valid=true;
            int temp=i;
            while(temp>0){
                rem=temp%10;
                rot=isvalid(rem);
                if(rot==-1){
                    valid=false;
                    break;
                }
                res=res+rot*place;
                place*=10;
                temp/=10;
            }
            if(valid && res!=i){
                cnt++;
            }
        }
        return cnt;
    }
};