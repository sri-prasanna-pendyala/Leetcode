class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        //i and j are 2 pointers which holds the indices and count is to count
        int i=0,j=1,count=0;
        //iterating loop while i<j and j<n
        while(i<j && j<nums.size())
        {
            //if the given cond is true then we count it
            if(nums[i]+nums[j]<target)
            {
                count++;
                //after counting we check while incrementing the j is pointing to last ele
                if(j==(nums.size()-1))
                {
                    //if j reaches last we increment i and j will be i+1
                    i++;
                    j=i+1;
                }
                else //else we normally increment j to nxt ele
                j++;
            }
            //we check if j is pointing the last ele even if the if condition is not satisfied as we
            //increment j irrespective of the condition
            else if(j==(nums.size()-1))
            {
                i++;
                j=i+1;
            }
            //we increment j at the end of all the statements it executes when all the other stmts are
            //not executed otherwise we increment j in every block
            else
                j++;
        }
        return count;
    }
};