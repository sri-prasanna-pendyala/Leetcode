class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        while(n>0){
            v.push_back(n%10);
            n/=10;
        }
        int prod=1,maxprod=0;
        for(int i=0;i<v.size();i++){
            prod=v[i];
            for(int j=i+1;j<v.size();j++){
                maxprod=max(maxprod,prod*v[j]);
            }
        }
        return maxprod;
    }
};