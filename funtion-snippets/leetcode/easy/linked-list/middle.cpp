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
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        // while(fast->next != NULL && fast->next->next!= NULL){
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }
        // if(fast->next!=NULL)
        //     slow = slow->next;
        while(fast!= NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
    
        return slow;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}