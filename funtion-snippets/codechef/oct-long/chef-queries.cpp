#include <iostream>
#include <algorithm>
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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int test;
    std::cin >> test;
    while (test)
    {
        long long int N, K, flag=0;
        cin>>N>>K;
        vector<long long int> queries(N);
        for (auto &i : queries)
            cin >> i;
        for (long long int i = 0; i < N; i++)
        {
            if (i == N - 1)
            {
                if (queries[i] < K){
                    cout << N << "\n";
                    flag=1;
                }
                break;
            }

            if(queries[i]<K){
                cout<<i+1<<"\n";
                flag=1;
                break;
                
            }
            else{
                queries[i+1]+=queries[i]-K;
            }
        }
        if(flag==0){
            cout<<(queries[N-1]/K)+N<<"\n";
        }
        test--;
    }
    return 0;
}