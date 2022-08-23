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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0, num;
        ListNode *temp = head, *curr = head, *prev = head;
        while(temp){
            temp = temp->next;
            count++;
        }
        if(count == n){
            if(curr->next == NULL)  return NULL;
            else    return head->next;
        }
        num = count - n + 1;
        while(num > 1){
            prev = curr;
            curr = curr->next;
            num--;
        }
        prev->next = curr->next;
        // delete curr;
        // cout<<curr->val;
        return head;
    }
};