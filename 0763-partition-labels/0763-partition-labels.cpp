class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        vector<int> vec;
        int i;
        //mapped every character with its last occured index
        for(i=0;i<s.size();i++)
            mp[s[i]]=i;
        i=0;
        while(i<s.size()){
            // store boundary value of this index
            int boun=mp[s[i]],j=i+1,start=i;
            // finding the last index of every ele in the boundary range
            // if the curr char last boundary is 8 & nxt ele last boundary is 9
            // we expand the boundary range to 9 & continue for nxt chars in boun range
            while(j<s.size() && j<=boun){
                if(mp[s[j]]>boun)
                    boun=mp[s[j]];
                j++;
            }
            // once the last boun check for chars in boun is checked 
            // we store 9-0+1=10(size of partition) & inc i to out of range i.e., boun+1
            vec.push_back(boun-start+1);
            i=boun+1;
        }
        return vec;
    }
};