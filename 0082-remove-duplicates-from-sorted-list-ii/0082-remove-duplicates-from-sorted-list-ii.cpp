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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* start = head;
        ListNode* curr = nullptr;
        ListNode* tail = nullptr;

        while(start != nullptr){
            mp[start->val]++;
            start = start -> next;
        }

        for(auto it:mp){
            if(it.second == 1) {
                ListNode* newNode = new ListNode(it.first);

                if(curr == nullptr) {
                    curr = tail = newNode;
                }else{
                    tail->next = newNode;
                    tail = newNode;
                }
            }
        }

        return curr;
    }
};