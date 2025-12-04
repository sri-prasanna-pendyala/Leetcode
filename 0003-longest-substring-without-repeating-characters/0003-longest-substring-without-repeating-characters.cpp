class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        else if(s.size()<2)
            return 1;
        vector<int> vec;
        int maxlen=0;
        //brute force logic with O(n^2) TC
        for(int i=0;i<s.size();i++){
            if(count(vec.begin(),vec.end(),s[i])){
                for(int j=0;j<vec.size();j++){
                    if(vec[j]==s[i]){
                        vec.erase(vec.begin()+j);
                        vec.push_back(s[i]);
                        break;
                    }
                    else{
                        vec.erase(vec.begin());
                        j--;
                    }
                }
            }
            else{
                vec.push_back(s[i]);
                maxlen=max(maxlen,(int)vec.size());
            }
        }
        maxlen=max(maxlen,(int)vec.size());
        return maxlen;
    }
};