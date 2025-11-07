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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        int n = nums.size();
        ListNode* current = head;
        ListNode* start = head;
        unordered_map<int,int> mp;
        bool flag = false;

        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }

        while(current != nullptr){
            int data = current->val;
            if(mp.find(data) == mp.end() && flag){
                start->next = current;
                start = start->next;
            }else if(mp.find(data) == mp.end() && !flag){
                start = current;
                head = start;
                flag = true;
            }else start->next = current->next;
            current = current->next;
        }

        return head;
    }
};