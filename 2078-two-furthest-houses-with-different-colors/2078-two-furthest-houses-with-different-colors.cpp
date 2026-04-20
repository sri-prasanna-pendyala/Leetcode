class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int end=colors.size()-1,maxi=INT_MIN;
        for(int i=0;i<colors.size();i++){
            if(colors[i]!=colors[end]){
                maxi=max(maxi,abs(i-end));
            }
        }
        end=0;
        for(int i=colors.size()-1;i>=0;i--){
            if(colors[i]!=colors[end]){
                maxi=max(maxi,abs(i-end));
            }
        }
        return maxi;
    }
};