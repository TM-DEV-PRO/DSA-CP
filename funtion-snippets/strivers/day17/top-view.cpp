vector<pair<int,int>> res(2*100002);
class Solution
{
    

    void solve(Node *root,int i, int h){
        if(root==NULL)
            return;
        if(h<res[i].second){
            res[i].first=root->data;
            res[i].second=h;
        }
        solve(root->left,i-1,h+1);
        solve(root->right,i+1,h+1);
    }
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        for(auto &i:res){
            i.first=-1;
            i.second=1000000;
        }
       solve(root,100000,0);
       vector<int> tview;
       for(auto i:res)
        if(i.first!=-1)
            tview.push_back(i.first);
       return tview;
    }

};
