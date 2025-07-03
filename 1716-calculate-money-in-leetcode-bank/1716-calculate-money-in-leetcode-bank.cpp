class Solution {
public:
    int totalMoney(int n) {
        int money=1,sum=0;
        for(int i=1;i<=n;i++)
        {
            //adding money
            sum+=money;
            money++;    //incrementing for the nxt day
            if(i%7==0) //if the day is the 7th day of the week
                money=(i/7)+1;  //then we change the money value to increment than the last week
        }
        return sum;
    }
};