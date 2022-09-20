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
  bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        ListNode *slow=head, *fast=head;
        ListNode *prev = NULL;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            ListNode *temp = slow->next;
            slow->next = prev;
            prev=slow;
            slow=temp;
          
        }
        if(fast->next==NULL){
              fast = slow->next;
              slow = prev;
        }
        else{
            fast = slow->next;
            slow->next=prev;
        }
       
        while(slow!=NULL && fast!=NULL){
            if(slow->val!=fast->val)
                return false;
            slow=slow->next;
            fast=fast->next;
        }
        
        return true;
        
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}