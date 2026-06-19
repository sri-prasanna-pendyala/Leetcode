class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int high=0,maxi=0;
        for(int i=0;i<gain.size();i++){
            high+=gain[i];
            maxi=max(high,maxi);
        }
        return maxi;
    }
};