class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,k=0,occ=1,j=0;
        if(chars.size()<2)
            return k+1;
        while(i<chars.size()){
            occ=1;
            char c=chars[i];
            chars[k++]=c;
            j=i+1;
            while(j<chars.size() && chars[j]==c){
                occ++;
                j++;
            }
            if(occ>1){
            string s=to_string(occ);
            for(auto &num:s)
                chars[k++]=num;
            }
            i=j;
        }
        return k;
    }
};