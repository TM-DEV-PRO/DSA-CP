#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
long long md = 1000000007;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        vector<string> board(3);
            
        for(auto &i: board)
            cin>>i;
        
        int nx=0, no=0;
        
        for(auto i:board){
            for(auto j:i){
                if(j=='X')
                    nx++;
                else if(j=='O')
                    no++;
            }
        }
        
        if(nx<no || abs(nx-no)>1)
            cout<<3<<endl;
        else{
            string s1,s2,s3,s4,s5;
    
            s1.push_back(board[0][0]);
            s1.push_back(board[1][0]);
            s1.push_back(board[2][0]);
             board.push_back(s1);
    
            s2.push_back(board[0][1]);
            s2.push_back(board[1][1]);
            s2.push_back(board[2][1]);
            board.push_back(s2);
    
            s3.push_back(board[0][2]);
            s3.push_back(board[1][2]);
            s3.push_back(board[2][2]);
             board.push_back(s3);
    
            s4.push_back(board[0][0]);
            s4.push_back(board[1][1]);
            s4.push_back(board[2][2]);
             board.push_back(s4);
    
            s5.push_back(board[0][2]);
            s5.push_back(board[1][1]);
            s5.push_back(board[2][0]);
             board.push_back(s5);
    
            string c1 = "XXX", c2="OOO";
    
            int wx=0, wo=0;
    
            for(auto i:board){
                if(i==c1)
                    wx++;
                
                else if(i==c2)
                    wo++;
            }
          
            if(wx==1 && wo==1)
                cout<<3<<endl;
            else if(wx==1 && nx==no)
                cout<<3<<endl;
            else if(wo==1 && nx>no)
                cout<<3<<endl;
            else if(wx==1 ||wo==1)
                cout<<1<<endl;
            else if(nx+no==9)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    test--;
    }
return 0;
}