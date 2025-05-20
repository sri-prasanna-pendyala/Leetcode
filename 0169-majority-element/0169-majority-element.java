class Solution {
    public int majorityElement(int[] nums) {
        int cand=0,cnt=0;
        for(int i=0;i<nums.length;i++)
        {
            if(cnt==0)
            {
                cand=nums[i];
                cnt++;
            }
            else if(cand==nums[i])
                cnt++;
            else
                cnt--;
        }
        return cand;
    }
}