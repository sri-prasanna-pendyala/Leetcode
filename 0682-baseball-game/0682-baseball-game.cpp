class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum=0,ele;
        stack<int> st;
        for(string c:operations){
            if(c=="+"){
                int ele=st.top();
                st.pop();
                sum=ele+st.top();
                st.push(ele);
                st.push(sum);
            }
            else if(c=="C")
                st.pop();
            else if(c=="D")
                st.push(st.top()*2);
            else{
                int val=stoi(c);
                st.push(val);
            }
        }
        sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};