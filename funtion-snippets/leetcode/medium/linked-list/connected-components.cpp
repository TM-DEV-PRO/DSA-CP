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
int numComponents(ListNode* head, vector<int>& G) {
        vector<int> check(10000,0);
        
        for(auto i:G)
            check[i] = 1;
        int ans =0;
        while(head!=NULL){
            if(check[head->val]==1){
                while(head!=NULL){
                    if(check[head->val]==0)
                        break;
                    head=head->next;
                }
                ans++;
            }
            
            else
                head=head->next;
        }
        
        return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}