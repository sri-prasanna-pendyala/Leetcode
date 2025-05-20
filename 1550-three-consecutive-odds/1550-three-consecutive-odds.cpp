class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2!=0)
                flag+=1;
            else
            {
                if(flag==3)
                    return true;
                flag=0;
            }
        }
        return (flag>=3)?true:false;
    }
};