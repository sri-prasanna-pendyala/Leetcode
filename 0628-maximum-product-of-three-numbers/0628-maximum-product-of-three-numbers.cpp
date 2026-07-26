class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int mx=INT_MIN,smx=INT_MIN,tmx=INT_MIN;
        int maxi=INT_MAX,secmaxi=INT_MAX,tmaxi=INT_MAX;
        for(int i=0;i<nums.size();i++){
            //positive
            if(nums[i]>mx){
                tmx=smx;
                smx=mx;
                mx=nums[i];
            }
            else if(nums[i]>smx){
                tmx=smx;
                smx=nums[i];
            }
            else if(nums[i]>tmx){
                tmx=nums[i];
            }
            //negative 
            if(nums[i]<maxi){
                tmaxi=smx;
                secmaxi=maxi;
                maxi=nums[i];
            }
            else if(nums[i]<secmaxi){
                tmaxi=secmaxi;
                secmaxi=nums[i];
            }
            else if(nums[i]<tmaxi){
                tmaxi=nums[i];
            }
        }
        int prod=mx*smx*tmx, negprod=mx*maxi*secmaxi;
        int ans=(prod>negprod)? prod: negprod;
        return ans;
    }
};