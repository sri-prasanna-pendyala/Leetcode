class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
       // bruteforce with O(n^2) time complexity
        int i=0,n=arr.size();
        while(i<n)
        {
            if(arr[i]==0)
            {
                arr.pop_back();
                arr.insert(arr.begin()+i,0);
                i+=2;
            }
            else
                i++;
        }

        
}
};