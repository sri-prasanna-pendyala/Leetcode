class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        vector<int> freq1(26,0),freq2(26,0);
        for(char c:s1)
            freq1[c-'a']++;
        int l=0,r=0,win=s1.size()-1,cnt=0,flag;
        while(r<s2.size()){
            flag=0;
            if(cnt<=win){
                freq2[s2[r]-'a']++;
                r++;
                cnt++;
            }
            else if(cnt>win){
                cnt--;
                for(int i=0;i<26;i++){
                    if(freq1[i]!=freq2[i]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    return true;
                freq2[s2[l]-'a']--;
                l++;
            }
        }
        flag=0;
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                flag=1;
                break;
            }
        }
        return (flag==1)?false:true;
    }
};