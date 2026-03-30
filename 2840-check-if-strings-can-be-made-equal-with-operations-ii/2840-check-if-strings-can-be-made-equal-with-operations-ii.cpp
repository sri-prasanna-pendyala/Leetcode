class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> arr1(256,0);
        for(int i=0;i<s1.size();i+=2){
            arr1[s1[i]]++;
        }
        vector<int> arr2(256,0);
        for(int i=0;i<s2.size();i+=2){
            arr2[s2[i]]++;
        }
        bool ans=(arr1==arr2);
        if(!ans)return ans;
        fill(arr1.begin(),arr1.end(),0);
        fill(arr2.begin(),arr2.end(),0);
        for(int i=1;i<s1.size();i+=2){
            arr1[s1[i]]++;
        }
        for(int i=1;i<s2.size();i+=2){
            arr2[s2[i]]++;
        }
        return (arr1==arr2) && ans;
    }
};