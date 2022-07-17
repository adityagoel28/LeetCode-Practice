/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode * fast = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow)    break;
        }
        if(!fast || !fast->next) return NULL;
        ListNode *temp = head;
        while(temp != slow){
            temp = temp->next;
            slow = slow->next;
        }
        return temp;
    }
};