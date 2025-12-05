class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0)
            nums1[0]=nums2[0];
        int a=m-1,b=m+n-1,c=n-1,temp;
        while(a>=0 && c>=0){
            if(nums1[a]>nums1[b] && nums1[a]>=nums2[c]){
                temp=nums1[a];
                nums1[a]=nums1[b];
                nums1[b]=temp;
                b--;
                a--;
            }
            else if(nums2[c]>nums1[b]){
                temp=nums2[c];
                nums2[c]=nums1[b];
                nums1[b]=temp;
                c--;
                b--;
            }
        }
        
    }
};