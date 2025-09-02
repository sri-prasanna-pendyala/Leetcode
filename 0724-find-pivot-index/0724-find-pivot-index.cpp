class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n),rightsum(n);
        leftsum[0]=nums[0];
        for(int i=1;i<n;i++){
            leftsum[i]=nums[i]+leftsum[i-1];
        }
        rightsum[0]=nums[n-1];
        for(int i=1;i<n;i++){
            rightsum[i]=nums[n-i-1]+rightsum[i-1];
        }
        int k=n-1;
        for(int i=0;i<n;i++){
            if(leftsum[i]-rightsum[k]==0)
                return i;
            k--;
        }
        return -1;


        //One of the approach
        // int n=nums.size();
        // vector<int> sumleft(n,0);
        // int runsum=0;
        // for(int i=0;i<n;i++){
        //     sumleft[i]=runsum;
        //     runsum+=nums[i];
        // }
        // runsum=0;
        // vector<int> sumright(n,0);
        // for(int i=n-1;i>=0;i--){
        //     sumright[i]=runsum;
        //     runsum+=nums[i];
        // }
        // for(int i=0;i<n;i++){
        //     if(sumleft[i]==sumright[i])
        //         return i;
        // }
        // return -1;
    }
};