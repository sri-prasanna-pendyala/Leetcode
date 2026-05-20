class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,i=1,water=0;
        int leftmaxi=INT_MIN,rightmaxi=INT_MIN;
        while(l<r){
            leftmaxi=max(leftmaxi, height[l]);
            rightmaxi=max(rightmaxi, height[r]);
            if(leftmaxi>=rightmaxi){
                water+=min(leftmaxi,rightmaxi)-height[r];
                r--;
            }
            else if(leftmaxi<rightmaxi){
                water+=min(leftmaxi,rightmaxi)-height[l];
                l++;
            }
        }
        return water;
    }
};