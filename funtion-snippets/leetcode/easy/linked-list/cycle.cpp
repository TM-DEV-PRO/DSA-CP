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
   bool hasCycle(ListNode *head) {
        if(head==NULL)
                return false;
        ListNode *slow=head, *fast=head->next;
        while(slow->next!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            if(slow==fast)
                return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return false;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}