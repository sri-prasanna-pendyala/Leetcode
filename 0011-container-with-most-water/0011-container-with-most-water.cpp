class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,area=0;
        while(l<r){
            int width=r-l;
            int high=min(height[l],height[r]);
            area=max(area,(width*high));
            if(height[l]<=height[r])
                l++;
            else
                r--;
        }
        return area;
    }
};