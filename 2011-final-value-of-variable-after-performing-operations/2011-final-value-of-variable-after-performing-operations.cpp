class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++){
            for(auto c:operations[i]){
                if(c=='-'){
                    x-=1;
                    break;
                }
                else if(c=='+'){
                    x+=1;
                    break;
                }
            }
        }
        return x;
    }
};