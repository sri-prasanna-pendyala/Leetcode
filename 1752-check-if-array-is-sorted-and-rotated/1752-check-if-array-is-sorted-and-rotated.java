class Solution {
    public boolean check(int[] nums) {
        int size=nums.length,x=0;
        int[] b=Arrays.copyOf(nums,size);
        Arrays.sort(b);
        for(int i=1;i<size;i++)
        {
            if(nums[i]<nums[i-1])
            {
                x=i;
                break;
            }
        }
        for(int i=0;i<size;i++)
        {
            if(b[i]!=nums[(i+x)%size])
                return false;
        }
        return true;
    }
}