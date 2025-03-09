class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp; //unordered map uses O(1) for insertion
        int val=nums.size()/2; 
        for(int i:nums) //iterating through nums
        {
            mp[i]++; //mp[0..n]: val++ ---> mp[i]++
            if(mp[i]>val) //early checking if freq> n/2 like mp[0] returns value of that key
                return i;
        }
        return -1;
    }
};