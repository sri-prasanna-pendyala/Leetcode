class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0)
            nums1=nums2;
        int l=m-1,r=n-1,k=m+n-1;
        while(r>=0 && l>=0){
            if(nums2[r]>nums1[l])
                nums1[k--]=nums2[r--];
            else
                nums1[k--]=nums1[l--];
        }
        while(l>=0)
            nums1[k--]=nums1[l--];
        while(r>=0)
            nums1[k--]=nums2[r--];
    }
};