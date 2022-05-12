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
        if(!head || !head->next)
            return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        bool hasLoop = false;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                hasLoop = true;
                break;
            }
        }
        slow = head;
        if(!hasLoop)
            return NULL;
        else {
            while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
};