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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* break1 = nullptr;
        int cnt1 = 0;

        while(curr1){
            cnt1++;
            if(cnt1 == a){
                break1 = curr1;
                while(curr2->next){
                    curr2 = curr2->next;
                }
            }if(cnt1 == b) {
                curr2->next = curr1->next->next;
                curr1->next = nullptr;
            }
            curr1 = curr1->next;
        }
        break1->next = list2;

        return list1; 
    }
};