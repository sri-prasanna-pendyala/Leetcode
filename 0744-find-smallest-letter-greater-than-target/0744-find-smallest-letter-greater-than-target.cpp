class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char mini=CHAR_MAX;
        for(char c:letters){
            if(c>target){
                if(c<mini && c!=target){
                    mini=c;
                }
            }
        }
        return mini==CHAR_MAX?letters[0]:mini;
    }
};