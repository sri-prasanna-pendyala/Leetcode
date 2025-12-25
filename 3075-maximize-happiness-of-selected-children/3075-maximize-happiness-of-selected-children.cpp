class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum=0,dec=0;
        sort(happiness.begin(),happiness.end());
        for(long long i=happiness.size()-1;i>=0 && k>0;i--){
            if(happiness[i]!=0 && happiness[i]-dec>=0)
                sum+=(happiness[i]-dec);
            dec++;
            k--;
        }
        return sum;
    }
};