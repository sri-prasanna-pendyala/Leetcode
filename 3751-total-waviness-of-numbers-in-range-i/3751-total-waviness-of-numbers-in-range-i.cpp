class Solution {
public:
    int totalWaviness(int num1, int num2) {
        if(num2<=100)
            return 0;
        else if(num1<100)
            num1=101;
        int peak=0,valley=0;
        for(int i=num1;i<=num2;i++){
            string s=to_string(i);
            for(int i=1;i<s.size()-1;i++){
                if(s[i]>s[i-1] && s[i]>s[i+1])
                    peak++;
                else if(s[i]<s[i-1] && s[i]<s[i+1])
                    valley++;
            }
        }
        return peak+valley;
    }
};