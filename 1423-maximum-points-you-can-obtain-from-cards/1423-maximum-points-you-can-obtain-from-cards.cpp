class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,n=cardPoints.size()-1;
        int l=0,r=k-1,maxsum=0;
        //Adding first k elemnts and taking it as the maximum sum
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        maxsum=sum;
        //iterating from last k elements and removing the 1st elements and adding the last ele to sum
        //storing the maxsum after removing 1st and adding last ele from the sum
        for(int i=n;i>=n-k+1;i--){
            sum-=cardPoints[r--];
            sum+=cardPoints[i];
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};