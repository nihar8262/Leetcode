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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while(curr->next){
            int p = curr->val;
            int q = curr->next->val;

            int x = gcd(p,q);

            ListNode* dummy = new ListNode(x);

            dummy->next = curr->next;
            curr->next = dummy;
            curr = curr->next->next;
        }

        return head;
    }
};