#include<bits/stdc++.h>
using namespace std;
const long long  INF = 1e18L + 5;
const long double D_INF = 1e10;
long double ans = 0.0;
long long res = 0;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int test;
    std::cin>>test;
    while(test)
    {
        int n;
        cin>>n;
        string str;

        cin>>str;
        int tl=0;
        vector<int> left(n),right(n);
        int p1=0;
        for(auto i:str){
            if(i=='T')
                tl++;
            left[p1]=tl;
            p1++;
        }
        int tr = 0;
        for(int i=n-1;i>=0;i--){
            if(str[i]=='T')
                tr++;
            right[i] = tr;
        }
        
        string res = "YES";
        int t=tl;
        tl=0,tr=0;
        for(int i=0;i<n;i++){
            if(str[i]=='M'){
                if(left[i]>0 && right[i]>0 && left[i]-tl>=0 && right[i]-tr>=0 && t>=2){
                    tl++;
                    tr++;
                    t-=2;
                }

                else{
                    res = "NO";
                    break;
                }
            }
        }

        if(t!=0){
            res = "NO";
        }

        cout<<res<<endl;
    test--;
    }
return 0;
}