class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int a=0;
        ListNode* p=head;
        while(p){
            a=a*10+p->val;
            p=p->next;
        }
        int n=a,m,i=0,sum=0;
        while(n>0){
            m=n%10;
            sum=sum+m*pow(2,i++);
            n/=10;
        }
       return sum; 
    }
    
};




