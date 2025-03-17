class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        // created 2 vectors and inserted one element at each vector
        vector<int> v1;
        v1.push_back(nums.at(0));
        vector<int> v2;
        v2.push_back(nums.at(1));
        for (int i = 2; i < nums.size(); i++) {
            // if last ele of v1 is lessthan v2 then we insert that ele in v2
            if (v1.back() < v2.back())
                v2.push_back(nums.at(i));
            else
                v1.push_back(nums.at(i));
        }
        // at last we append the 2nd vector to first and return it
        v1.insert(v1.end(), v2.begin(), v2.end());
        return v1;
    }
};