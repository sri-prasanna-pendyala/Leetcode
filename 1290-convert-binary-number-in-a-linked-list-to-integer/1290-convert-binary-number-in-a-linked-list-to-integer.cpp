/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n=-1,ans=0,bin;
        //You're moving head forward in the first loop until it becomes nullptr.
        //Then in the second loop, you're trying to use head again — but it's already nullptr
        //That's why we used another var to store head values
        ListNode* cur=head;
        while(cur!=nullptr){
            n+=1;
            cur=cur->next;
        }
        while(head!=nullptr){
            //it does conversion of values like 2^1 * 1 += ans
            ans+=(pow(2,n)*head->val);
            n--;
            head=head->next;
        }
        return ans;
    }
};