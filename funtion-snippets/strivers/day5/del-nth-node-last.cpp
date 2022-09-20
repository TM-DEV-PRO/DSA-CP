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

ListNode* removeNthFromEnd(ListNode* head, int n) {

    ListNode *slow=head, *fast=head;
    n--;
    while(n--)
        fast=fast->next;
    
    ListNode *prev = NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next;
    }
    
    if(prev==NULL && slow->next==NULL)
        head=NULL;
    else if(prev == NULL)
        head = slow->next;
    else
        prev->next = prev->next->next;
    
    
    
    return head;
    
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}