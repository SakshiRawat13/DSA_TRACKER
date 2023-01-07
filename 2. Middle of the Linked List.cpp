class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        // using the fast and slow pointer approach
        // let p be the fast pointer 
        // let q be the slow pointer
        ListNode* p= head->next;
        ListNode* q= head;
        while(p){
            q=q->next;
            p=p->next;
            if(p)
            p=p->next;
        }
        return q;
    }
};
