class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int key=0,place=1,temp=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[key])
            {
                temp=nums[i];
                nums[i]=nums[place];
                nums[place]=temp;
                key++;
                place++;
            }
        }
        return place;
        // int move=1,uniq=nums[0],dup=-1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     //if uniq num is found in array...its is duplicated one..so dup++
        //     if(uniq==nums[i])
        //     {
        //         dup++;
        //         continue;
        //     }
        //     else
        //     {
        //         //else we set the newly found num as uniq num found so far..and swap the
        //         //uniq num with the place where the nxt uniq num should go
        //         uniq=nums[i];
        //         swap(nums[move],nums[i]);
        //         //we increment the place to nxt one
        //         move++;
        //     }
        // }
        // return nums.size()-dup;
    }

};