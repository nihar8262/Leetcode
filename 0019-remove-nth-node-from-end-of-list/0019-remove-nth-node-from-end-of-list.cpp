
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int cnt=0;

        if(head == NULL) return head;
        if(head->next == NULL) {
            head = NULL;
            return head;
        }

        if(head->next->next == NULL && n==1){
            head->next = NULL;
            return head;
        }
        

        while(temp){
            cnt++;
            temp=temp->next;
        }

        int place = cnt-n;
        ListNode* go = head;
        int i=1;

        if(place == 0){
            head = head->next;
            return head;
        }

        while(go!=NULL && go->next!=NULL){
            if(i == place){
                go->next = go->next->next;
            }
            i++;
            go = go->next;
        }

        return head;
    }
};