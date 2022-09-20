#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        ListNode *head, *curr;
        
        if(l1->val<=l2->val){
            head=l1;
            l1=l1->next;
        }
        else{
            head=l2;
            l2=l2->next;
        }
        
        curr=head;
        
        while(l1!=NULL && l2!=NULL){
           if(l1->val<=l2->val){
                curr->next=l1;
                curr=l1;
                l1=l1->next;
                   
            }
            else{
                curr->next=l2;
                curr=l2;
                l2=l2->next;
            }
        }
        
        curr->next = (l1!=NULL)?l1:l2;
        
        return head;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}