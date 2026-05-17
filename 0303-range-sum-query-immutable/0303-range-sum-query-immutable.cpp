class NumArray {
public:
    vector<int> a,presum;
    NumArray(vector<int>& nums) {
        a=nums;
        presum.resize(a.size());
        presum[0]=a[0];
        for(int i=1;i<a.size();i++){
            presum[i]=a[i]+presum[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return presum[right];
        return presum[right]-presum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */