class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        //brute force 
        // for(int i=0;i<fruits.size();i++)
        // {
        //     for(int j=0;j<baskets.size();j++)
        //     {
        //         if(fruits[i]>baskets[j])
        //             continue;
        //         else if(baskets[j]>=fruits[i])
        //         {
        //             baskets.erase(baskets.begin()+j);
        //             break;
        //         }
        //     }
        // }
        // return baskets.size();
        
        //brute force too
        int cnt=baskets.size();
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j]>=fruits[i]){
                    baskets.erase(baskets.begin()+j);
                    cnt--;
                    break;
                }
            }
        }
        return cnt;
    }
};