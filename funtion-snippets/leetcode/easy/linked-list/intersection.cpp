#include <limits.h>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <iterator>
using namespace std;
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *na=headA, *nb=headB, *endA=headA, *endB=headB;
        while(na!=NULL || nb!=NULL){
            if(na!=NULL){
                endA=na;
                na=na->next;
            }
            
            if(nb!=NULL){
                endB=nb;
                nb=nb->next;
            }
        }
        
        if(endA!=endB)
            return NULL;
        na=headA, nb=headB;
        while(true){
            if(na==nb)
                return na;
            
            if(na->next==NULL){
                na=headB;
            }
            
            else
                na=na->next;
            
            if(nb->next==NULL){
                nb=headA;
            }
            
            else
                nb=nb->next;
        }
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}