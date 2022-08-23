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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp = head, *fast = head, *slow = head, *curr = head, *prev = head;
        if(head->next == NULL)  return NULL;
        if(head->next->next == NULL){
            head->next = NULL;
            return head;
        }
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        while(temp->next != slow){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        // cout<<temp->val;
        return head;
    }
};