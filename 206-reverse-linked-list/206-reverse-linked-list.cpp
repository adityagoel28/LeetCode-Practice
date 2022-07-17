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
    ListNode* reverseList(ListNode* head) {
        
        // Naive Solution
        // if(head == NULL)    return NULL;
        // else if(head->next == NULL) return head;
        // vector<int> arr;
        // for(ListNode *curr = head; curr != NULL; curr=curr->next){
        //     arr.push_back(curr->val);
        // }
        // for(ListNode *curr = head; curr != NULL; curr=curr->next){
        //     curr->val = arr.back();
        //     arr.pop_back();
        // }
        // return head;
        
        // Efficient Solution
        ListNode *curr = head, *prev = NULL;
        while(curr != NULL){
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};