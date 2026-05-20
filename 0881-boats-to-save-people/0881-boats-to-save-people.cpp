class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int r=people.size()-1,l=0,boat=0;
        while(r>=l){
            if(people[l]+people[r]<=limit){
                boat++;
                l++;
                r--;
            }
            else if(people[l]+people[r]>limit){
                boat++;
                r--;
            }
            else{
                boat++;
                l++;
            }
        }
        return boat;
    }
};