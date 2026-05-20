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

private:
    int getLength(ListNode* head){

        ListNode* temp = head;
        int length = 0;

        while(temp){
            length++;
            temp = temp->next;
        }

        return length;
    }

public:
    ListNode* middleNode(ListNode* head) {
        int len = getLength(head);
        len = len/2;
        int cnt = 0;

        ListNode* temp = head;

        while(cnt<len){
            temp = temp->next;
            cnt++;
        }

        return temp;
    }
};