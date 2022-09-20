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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
                return l2;
        if(l2==NULL)
                return l1;
        ListNode *head = NULL, *temp = NULL;
        if(l1->val<=l2->val){
            head = l1;
            l1=l1->next;
        }
        else {
            head = l2;
            l2=l2->next;
        }
            
        temp = head;
        
        while(l1!=NULL && l2!=NULL){
              if(l1->val<=l2->val){
                     temp->next = l1;
                     temp = l1;
                     l1 = l1->next;
                   
            }
        
        else {
                     temp->next = l2;
                     temp=l2;
                     l2=l2->next;
            }
        }
        if(l1==NULL)
                 temp->next = l2;
        else
                 temp->next = l1;
        return head;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}