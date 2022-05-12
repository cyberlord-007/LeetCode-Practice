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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2)
            return l1;
        else if(!l1 && l2)
            return l2;
        else if(!l2 && l1)
            return l1;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* head = NULL;
        if(curr1->val < curr2->val) {
            head = curr1;
            curr1 = curr1->next;
        } else {
            head = curr2;
            curr2 = curr2->next;
        }
        ListNode* temp = head;
        while(curr1 && curr2) {
            if(curr1->val < curr2->val) {
                temp->next = curr1;
                curr1 = curr1->next;
                temp = temp->next;
            } else {
                temp->next = curr2;
                curr2 = curr2->next;
                temp = temp->next;
            }
        }
        while(curr1) {
            temp->next = curr1;
            curr1 = curr1->next;
            temp = temp->next;
        }
        while(curr2) {
            temp->next = curr2;
            curr2 = curr2->next;
            temp = temp->next;
        }
        return head;
    }
};