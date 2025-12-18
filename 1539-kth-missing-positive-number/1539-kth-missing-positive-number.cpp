class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int cnt=0,num=1,i=0;
        // while(cnt<k && i<arr.size()){
        //     if(arr[i]!=num){
        //         cnt++;
        //     }
        //     else{
        //         i++;
        //     }
        //     num++;
        //     if(cnt==k)
        //         break;
        // }
        // return (cnt==k)?num-1:arr[arr.size()-1]+k;
        vector<int> v;
        int num=1,cnt=0,i=0;
        while(i<arr.size()){
            if(arr[i]!=num){
                v.push_back(num);
                cnt++;
            }
            else
                i++;
            num++;
        }
        if(cnt<k){
            int n=arr[arr.size()-1],i=1;
            while(cnt<k){
                v.push_back(n+i);
                cnt++;
                i++;
            }
        }
        return v[k-1];
    }
};