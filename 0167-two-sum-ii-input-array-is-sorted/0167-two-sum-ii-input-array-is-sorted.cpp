class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // initialise 2 pointers -- one from start & one from end
        int i=0,j=numbers.size()-1;
        while(j<numbers.size()){
            // if sum == target return indexes+1
            if(numbers[i]+numbers[j]==target)
                return {i+1,j+1};
            //if sum<target we have to search in upper part of array as it is ascend order
            else if(numbers[i]+numbers[j]<target)
                i++;
            // else then search lower part of array like (-10+16=6 for target 4 so search lower part by decrementing from 6 to 2)
            else
                j--;
            
        }
        return {-1,-1};
    }
};