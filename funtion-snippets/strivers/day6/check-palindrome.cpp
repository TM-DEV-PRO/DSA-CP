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

bool isPalindrome(ListNode* head) {
        
        
        
        if(head->next==NULL)
            return true;
        
        ListNode *slow=head, *fast=head;
        ListNode *prev = slow;
        while(fast!=NULL && fast->next!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        prev->next=NULL;
        ListNode *curr = slow;
        if(fast!=NULL)
            curr=slow->next;
        prev=NULL;
        
        while(curr!=NULL){
            ListNode* temp = curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
    
        while(head!=prev){
            if(head->val!=prev->val)
                return false;
            head=head->next;
            prev=prev->next;
        }
        
        return true;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}