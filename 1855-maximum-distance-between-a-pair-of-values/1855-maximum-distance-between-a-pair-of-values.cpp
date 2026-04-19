class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int i,j=0,maxi=INT_MIN;
        for(int i=0;i<nums1.size();i++){
            j=max(i,j);
            while(j<nums2.size() && nums2[j]>=nums1[i]){
                maxi=max(maxi,j-i);
                j++;
            }
        }
        return (maxi==INT_MIN)?0:maxi;
    }
};