class NumArray {
    int numarray[];
    public NumArray(int[] nums) {
        this.numarray=nums;
    }
    
    public int sumRange(int left, int right) {
         int total=0;
        for(int i=left;i<=right;i++)
        {
            total+=numarray[i];
        }
        return total;
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(left,right);
 */