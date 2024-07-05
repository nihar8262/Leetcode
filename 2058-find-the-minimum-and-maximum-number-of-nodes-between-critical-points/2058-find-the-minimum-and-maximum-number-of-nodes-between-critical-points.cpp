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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = head;
        ListNode* curr = head;
        ListNode* nextNum = head->next;
        vector<int> vec;
        int i = 1, maxi = 0, mini = INT_MAX;
        bool flag = false;

        while (nextNum != nullptr) {
            if ((curr->val > nextNum->val && curr->val > prev->val) ||
                (curr->val < prev->val && curr->val < nextNum->val)) {
                vec.push_back(i);
            }

            i++;
            prev = curr;
            curr = curr->next;
            nextNum = nextNum->next;
        }

        
        if (vec.size() < 2)
                return {-1, -1};
        else {
            maxi=vec[vec.size()-1]-vec[0];
                for (int i = 1; i < vec.size() ; i++) {
                        int diff = vec[i] - vec[i-1];
                        mini = min(mini, diff);
                }

            return {mini, maxi};
        }
    }
};