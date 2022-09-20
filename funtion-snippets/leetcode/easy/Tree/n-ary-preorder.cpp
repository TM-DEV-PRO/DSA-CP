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
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
void sol(Node *root, vector<int> &res){
        if(root==NULL)
            return;
        res.push_back(root->val);
        for(int i=0;i<root->children.size();i++){
            sol(root->children[i],res);
        }
        
        return;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}