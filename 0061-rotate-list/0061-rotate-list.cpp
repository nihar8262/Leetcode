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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0) return head;

        ListNode* temp = head;
        ListNode* curr = head;
        ListNode* head1 = NULL;
        ListNode* go = head1;
        int cnt = 1,n=0;

        if(k==0) return head;

        while(temp->next != NULL){
            temp = temp->next;
            cnt++;
        }

        k=k%cnt;
        int d = cnt-k-1;
        if(k % cnt == 0) return head;

        
        for(int i=0; i<d; i++) {
            curr = curr->next;
        }

        head1 = curr->next;
        curr->next = NULL;
        temp->next = head;

        

        return head1;
    }
};