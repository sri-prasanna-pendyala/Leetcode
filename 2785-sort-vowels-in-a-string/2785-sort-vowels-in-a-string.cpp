class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<int> arr;
        vector<char> str;
        for(auto c:s){
            if(isvowel(c))
                arr.push_back(c);
        }
        sort(arr.begin(),arr.end());
        int i=0;
        for(auto c:s)
        {
            if(isvowel(c))
                str.push_back(arr[i++]);
            else
                str.push_back(c);
        }
        string res(str.begin(),str.end());
        return res;
    }
};