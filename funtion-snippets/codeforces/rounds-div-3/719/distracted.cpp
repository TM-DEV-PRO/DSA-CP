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
        unordered_set<char> st;

        st.insert(str[0]);
        string res = "YES";
        for(int i=1;i<n;i++){
            if(str[i]!=str[i-1] && st.find(str[i])!=st.end()){
                res = "NO";
                break;
            }
        }

        cout<<res<<endl;

    test--;
    }
return 0;
}