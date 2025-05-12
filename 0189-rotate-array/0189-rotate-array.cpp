class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      //check if the steps are greater than the size of the vector and assign accordingly
      k=(k>nums.size())?k%nums.size():k;
      vector<int> v;
      //as it is right shifting and the no of steps to shift the array is based on last ele
      //inorder to shift the first n ele we subtract k with size of the array 
      int d=nums.size()-k;
      //1st insert the last ele which are shifted to starting
      v.insert(v.begin(),nums.begin()+d,nums.end());
      //and then 1st ele into it at last
      v.insert(v.end(),nums.begin(),nums.begin()+d);
      //clear the org array and insert the rotated array
      nums.clear();
      nums.insert(nums.begin(),v.begin(),v.end());
    }
};