class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total=numBottles;
        int rem=numBottles;
        int bot=1;
        while(bot>0){
            bot=rem/numExchange;
            total+=bot;
            rem=(rem%numExchange)+bot;
        }
        return total;
    }
};