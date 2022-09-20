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

ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL)
            return head;
        int n = 0;
        
        ListNode *curr=head,*prev=NULL;
        
        while(curr!=NULL){
            curr=curr->next;
            n++;
        }
        
        k = k%n;
        
        int x = n-k;
        curr=head;
        while(x--){
            ListNode *temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        
  
        
        ListNode *prev2 = NULL;
        
        while(curr!=NULL){
            ListNode *temp = curr->next;
            curr->next=prev2;
            prev2=curr;
            curr=temp;
        }
        
        head->next=prev2;
        
        head=NULL;
        
        while(prev!=NULL){
            ListNode *temp = prev->next;
            prev->next=head;
            head = prev;
            prev=temp;
        }
        
        
        return head;
        
        
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}