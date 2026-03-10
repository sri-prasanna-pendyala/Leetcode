class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=m+n-1,k=n-1;
        while(i>=0 && k>=0){
            if(nums2[k]>nums1[i]){
                nums1[j--]=nums2[k--];
            }
            else{
                nums1[j--]=nums1[i--];
            }
        }
        while(k>=0){
            nums1[j--]=nums2[k--];
        }
        
        // if(m==0)
        //     nums1[0]=nums2[0];
        // int a=m-1,b=m+n-1,c=n-1,temp;
        // while(c>=0){
        //     if(a>=0 && nums1[a]>nums2[c]){
        //         nums1[b--]=nums1[a--];
        //     }
        //     else{
        //         nums1[b--]=nums2[c--];
        //     }
        // }
    }
};