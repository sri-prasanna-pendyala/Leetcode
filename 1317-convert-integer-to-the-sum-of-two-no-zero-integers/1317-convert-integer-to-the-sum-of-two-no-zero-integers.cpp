class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a=1,b,tmp=n-1;
        string s;
        bool zero=false;
        vector<int> v;
        for(int i=1;i<=n;i++){
            zero=false;
            b=n-i;
            s=to_string(b);
            for(char c:s){
                if(c=='0'){
                    zero=true;
                    break;
                }
            }
            if(zero==true)continue;
            if(i+b==n){
                s=to_string(i);
                for(char c:s){
                    if(c=='0'){
                        zero=true;
                        break;
                    }
                }
                if(zero==true)continue;
                if(zero==false){
                    v.push_back(b);
                    v.push_back(i);
                    break;
                }
            }
            else
                continue;
            // if(i%10==0){
            //     a=((a+1)%10==0)?a+2:a+1;
            //     continue;
            // }
            // else{
            //     if(i+a==n){
            //         v.push_back(i);
            //         v.push_back(a);
            //         break;
            //     }
            //     else
            //         a=((a+1)%10==0)?a+2:a+1;
            // }
        }
        return v;
    }
};