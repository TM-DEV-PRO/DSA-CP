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
  ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *head2 = new ListNode(0);
        ListNode *curr2=head2,*curr=head,*prev=NULL;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->val<x){
                ListNode *nx = new ListNode(curr->val);
                curr2->next = nx;
                curr2 = nx;
                curr->val = curr->next->val;
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                delete(temp);
            }
            
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        
        if(curr->val<x){
            ListNode *nx = new ListNode(curr->val);
            curr2->next = nx;
            curr2 = nx;
            if(prev!=NULL)prev->next=NULL;
            if(head!=curr){
                delete(curr);
                curr2->next=head;
            }
            else{
                delete(curr);
                curr2->next=NULL;
            }
        }
        
        else{
            curr2->next=head;
        }
        
     
       ListNode *temp = head2;
       head2 = head2->next;
       delete(temp);
       return head2;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}