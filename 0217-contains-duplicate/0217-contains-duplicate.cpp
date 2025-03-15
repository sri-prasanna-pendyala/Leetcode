class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //we create an unordered_map i.e., hashtable to store elements in the form of key value pairs
        //the element in the array will be keys and their frequency is its value
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            //we increment the value of the key for its each occurance
            mp[nums[i]]++;
        }
        //we return true if all values are 1 that means all keys are only appeared once else false(all dups
        for(auto i:mp)
        {
            if(i.second>1)
                return true;
        }
        return false;
    }
};