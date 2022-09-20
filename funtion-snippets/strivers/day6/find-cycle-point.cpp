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
 ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        bool isCycle = false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                isCycle=true;
                break;
            }
        }
        
        if(!isCycle)
            return NULL;
        
        slow=head;
        
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        
        return slow;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}