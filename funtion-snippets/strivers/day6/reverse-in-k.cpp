#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long int md = 1000000007LL;
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev=NULL, *next=NULL, *curr=head, *last=head,*hd=head;
        
        
        int f= 1;
        while(true){
            int count = 0;
            prev=curr;
            hd=curr;
            while(curr!=NULL && count<k){
                curr=curr->next;
                count++;
            }
            
            if(count<k)
                return head;
            next=curr;
            curr=prev;
            prev=next;
            
            while(curr!=next){
                ListNode *temp = curr->next;
                curr->next = prev;
                prev=curr;
                curr=temp;
            }
            
            if(f==1){
                head=prev;
                f=0;
            }
            else{
                last->next=prev;
                last=hd;
            }
        }
        
        return head;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}