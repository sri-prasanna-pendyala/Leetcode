class Solution {
public:
    string rotate(string s,int n){
        string rot="";
        rot.append(s,n,s.size()-n);
        rot.append(s,0,n);
        return rot;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size())
            return false;
        else if(s==goal)
            return true;
        string rot;
        for(int i=1;i<s.size();i++){
            if(rotate(s,i)==goal)
                return true;
        }
        return false;
    }
};