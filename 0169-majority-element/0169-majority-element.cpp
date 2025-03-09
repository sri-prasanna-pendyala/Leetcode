class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int> mp; //unordered map uses O(1) for insertion
        // int val=nums.size()/2; 
        // for(int i:nums) //iterating through nums
        // {
        //     mp[i]++; //mp[0..n]: val++ ---> mp[i]++
        //     if(mp[i]>val) //early checking if freq> n/2 like mp[0] returns value of that key
        //         return i;
        // }
        // return -1;

        //Boyer-Moore Voting Algorithm for O(1) space and O(n) time 
        int ele,count=0; //ele for storing majority element and count for counting occurences
        for(int i:nums)
        {
            if(count==0)
            {
                ele=i;
                //as the ele occurs, the count will be incremented to 1 at first
                count=1;
            }
            else if(ele==i)
            //if the ele appeared twice the count will be incremented
                count++;
            else
                count--;
        }
        // As it is sure that there will be majority ele in the array
        return ele;
    }
};