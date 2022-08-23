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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp = head, *temp1 = head, *curr = head, *prev = head;
        int count = 0, kk = k;
        while(k > 1){
            temp = temp->next;
            k--;
        }
        while(temp1->next){ // can be combined with the above loop
            temp1 = temp1->next;
            count++;
        }
        if(count+1 == kk && kk == 1)  return head;
        int num = count + 1 - kk + 1;
        while(num > 1){
            prev = curr;
            curr = curr->next;
            num--;
        }
        if(count+1 == kk){
            int temp2 = temp1->val;
            temp1->val = head->val;
            head->val = temp2;
        }
        else{
            int temp2 = temp->val;
            temp->val = prev->next->val;
            prev->next->val = temp2;
        }
        return head;
    }
};