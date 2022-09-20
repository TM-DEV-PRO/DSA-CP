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
ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
                return head;
        ListNode *prev = head, *curr=head;
        curr=head->next;
        
        while(curr!=NULL){
            if(curr->val == prev->val){
                prev->next = curr->next;
                curr=curr->next;
            }
            else{
                prev=curr;
                curr=curr->next;
            }
        }
        
        return head;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}