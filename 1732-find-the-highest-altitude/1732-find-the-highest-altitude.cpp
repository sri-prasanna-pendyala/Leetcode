class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0,maxi=0;
        for(auto &i:gain){
            high+=i;
            maxi=max(high,maxi);
        }
        return maxi;
    }
};