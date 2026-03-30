class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> vec;
        for(int i=0;i<boxes.size();i++){
            int cnt=0;
            for(int j=0;j<boxes.size();j++){
                if(i!=j && boxes[j]!='0')
                    cnt+=abs((j-i));
            }
            vec.push_back(cnt);
        }
        return vec;
    }
};