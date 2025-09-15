class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0,space=0;
        bool isbroken=false;
        for(int i=0;i<text.size();i++){
            if(find(brokenLetters.begin(),brokenLetters.end(),text[i])!=brokenLetters.end()){
                isbroken=true;
            }
            if(text[i]==' ' || i==text.size()-1){
                space+=1;
                if(isbroken)
                    cnt++;
                isbroken=false;
            }
        }
        return space-cnt;
    }
};