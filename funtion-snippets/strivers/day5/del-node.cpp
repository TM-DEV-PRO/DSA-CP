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

void deleteNode(ListNode* node) {
    node->val = node->next->val;
    ListNode *temp = node->next;
    node->next = node->next->next;
    delete(temp);
    
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}