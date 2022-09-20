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

  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *sa = headA, *sb=headB, *ea=headA, *eb=headB;
        
        while(sa!=NULL){
            ea=sa;
            sa=sa->next;
        }
        
         while(sb!=NULL){
            eb=sb;
            sb=sb->next;
        }
        
        if(ea!=eb)
            return NULL;
        
        sa=headA, sb=headB;
        
        while(sa!=sb){
            if(sa==ea){
                sa=headB;
                sb=sb->next;
            }
            
            else if(sb==eb){
                sb=headA;
                sa=sa->next;
            }
            else{
                sa=sa->next;
                sb=sb->next;
            }

                
        }
        return sa;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}