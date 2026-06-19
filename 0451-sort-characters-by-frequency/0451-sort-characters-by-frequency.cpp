class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char c:s)
            mp[c]++;
        vector<pair<char,int>> v(mp.begin(),mp.end());
        sort(v.begin(), v.end(), [](const auto& a, const auto& b){
            return a.second>b.second;
        });
        string str="";
        for(auto i:v){
            while(i.second>0){
                str+=i.first;
                i.second--;
            }
        }
        return str;
    }
};