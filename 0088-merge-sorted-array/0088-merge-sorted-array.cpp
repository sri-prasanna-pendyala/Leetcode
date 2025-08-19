class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //bruteforce
        if(m==0){
            nums1=nums2;
            return;
        }
        else if(n==0)
            return;
        int k=0;
        for(int i=nums1.size()-1;i>=m;i--){
            nums1[i]=nums2[--n];
        }
        sort(nums1.begin(),nums1.end());
    }
};