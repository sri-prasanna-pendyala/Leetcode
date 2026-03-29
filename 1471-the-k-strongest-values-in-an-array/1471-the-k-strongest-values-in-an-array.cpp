class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1,n=arr.size()-1,med=arr[n/2];
        vector<int> ans;
        while(k>0){
            // first check the 1st condition |arr[i] - m| > |arr[j] - m|
            if(abs(arr[i]-med)>abs(arr[j]-med))
                ans.push_back(arr[i++]);
            //then check the 2nd condition|arr[i] - m| == |arr[j] - m|
            else if(abs(arr[j]-med)==abs(arr[i]-med)){
                // push whatever is largest and move that pointer
                if(arr[j]>arr[i])
                    ans.push_back(arr[j--]);
                else
                    ans.push_back(arr[i++]);
            }
            // if abs(i-m) is not big then we store the j 
            else
                ans.push_back(arr[j--]);
            k--;
        }
        return ans;
    }
};