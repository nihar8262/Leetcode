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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head->next;
        ListNode* res=new ListNode(0);
        ListNode* ans=res;
        int sum=0;
        

        while(temp!=nullptr){            
            while(temp->val!=0){
                sum+=temp->val;
                temp=temp->next;
            }
            if(temp->val==0){
                ans->next=new ListNode(sum);
                ans=ans->next;
                sum=0;
            }
            temp=temp->next;
        }

        return res->next;
    }
};