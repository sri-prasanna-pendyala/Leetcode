class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        //bruteforce
        // int n=nums.size();
        // unordered_set<int> s(n);
        // unordered_set<int> s(n);
        // vector<int> diff(n);
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         s.insert(nums[j]);
        //     }
        //     s.insert(nums[i]);
        //     diff[i]=s.size()-s.size();
        //     // s.clear();
        //     s.clear();
        // }
        // return diff;

        //optimised
        int n=nums.size();
        unordered_set<int> s;   //set to maintain distinct elements
        //vectors to store the cnt of distinct elements for every index inclusively 
        vector<int> prefixdistcnt(n),suffixdistcnt(n);    
        int distcnt=0;  //to store distinct count
        //loop to store prefix distinct ele vector
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])==0){
                s.insert(nums[i]);
                prefixdistcnt[i]=++distcnt; //increment distcnt if ele not found
            }
            else
                prefixdistcnt[i]=distcnt; //do not inc if found
        }
        distcnt=0;
        s.clear();
        //same for suffix
        for(int i=nums.size()-1;i>=0;i--){
            if(s.count(nums[i])==0){
                s.insert(nums[i]);
                suffixdistcnt[i]=++distcnt;
            }
            else
                suffixdistcnt[i]=distcnt;
        }
        //store the difference of prefix and suffix distinct ele in this vector
        // for [3,2,3,4,2]
        // prefixdistcnt [1,2,2,3,3]
        // suffixdistcnt [3,3,3,2,1]
        // diff vector   [-2,-1,0,2,3] --> [1-3,2-3,2-2,3-1,3] pre[i]-suf[i+1]
        vector<int> diff(n);
        for(int i=0;i<nums.size();i++){
            if(i!=nums.size()-1)
            diff[i]=prefixdistcnt[i]-suffixdistcnt[i+1];
            else
                diff[i]=prefixdistcnt[i];
        }
        return diff;
    }
};