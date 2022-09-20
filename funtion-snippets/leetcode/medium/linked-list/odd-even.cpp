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
 ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return head;
        ListNode *h1=head, *h2=head->next, *h=head->next;
        int flag=1;
        while(h1->next!=NULL && h2->next!=NULL){
          if(flag==1) {
              h1->next = h2->next;
              h1 = h1->next;
              flag=0;
          }
          else{
              h2->next=h1->next;
              h2=h2->next;
              flag=1;
          }          
        }
        
        h1->next = h;
        h2->next = NULL;
        
        return head;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}