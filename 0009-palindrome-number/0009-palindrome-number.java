class Solution {
    public boolean isPalindrome(int x) {
        int rem,res=0;
        if(x<0)
            return false;
        else{
            for(int i=x; i>0; i/=10)
            {
                rem=i%10;
                res=rem+res*10;
            }
        }
        return (res==x)?true:false;
    }
}