class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector <int> vc;
        if(head==nullptr)
        return 0;
        ListNode* p= head;
        int n=0;
        while(p){
            vc.push_back(p->val);
            n++;
            p=p->next;
        }
        int prod=1;
        int sum=0;
        for(int i=n-1; i>=0; i--){
           sum= sum + vc[i]*prod;
           prod*=2;
        }
       return sum;
    }
};
