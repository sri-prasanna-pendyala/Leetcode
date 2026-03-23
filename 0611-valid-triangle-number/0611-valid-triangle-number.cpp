class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size()<3)return 0;
        sort(nums.begin(),nums.end());
        int cnt=0;
        //finding from last by fixing k
         for(int k=nums.size()-1;k>1;k--){ //fixing largest value & iterating till k=2(i=0,j=1) last 
            int i=0,j=k-1; // i is always smallest , j moves from k to i
            while(i<j){ // while i & j not intersect
                if(nums[i]+nums[j]>nums[k]){ // if the triangle prop valid 
                    //then the range in between (i,j) are also valid
                    // 2,2,3,4, k=4, j=3, i=2 & 2+3>4 so range in (0,2) also forms valid tri with 4
                    // so count will be 2-0=2 
                    // then j-- i.e., j=2, i=2, k=4 & 2+2>4 so range (0,1) i.e., 1-0=1
                    // so count will be 2+1=3
                    cnt+=j-i;
                    j--;
                }
                else
                    i++;
            }
        }
        return cnt;

        //finding from front by fixing i (not worked but idea is same)
        // for(int i=0;i<nums.size()-2;i++){
        //     int j=i+1,k=nums.size()-1;
        //     while(k>j){
        //         if(nums[i]+nums[j]>nums[k]){
        //             cnt+=k-j;
        //             k--;
        //         }
        //         else
        //             j++;
        //     }
        // }
    }
};