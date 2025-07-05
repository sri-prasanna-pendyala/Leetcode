class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> s;
        int num=-1;
        for(int i=0;i<arr.size();i++)
        {
            s[arr[i]]++;
        }
        for(const auto& i:s){
            if(i.second==i.first){
                if(i.first>num)
                    num=i.first;
            }
        }
        return num;
    }
};