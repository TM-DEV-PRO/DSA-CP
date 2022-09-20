#include <bits/stdc++.h>
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
#include <iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    std::cin >> test;
    int t = 1;
    while (t <= test)
    {
        string str;
        cin >> str;
        if (str.length() > 4)
        {
            string s1 = "KICK", s2 = "START", temp1 = "", temp2 = "";
            for (int i = 0; i < 4; i++)
            {
                temp1 += str[i];
                temp2 += str[i];
            }

            temp2 += str[4];

            int count_kick = (temp1 == s1) ? 1 : 0;
            int ans = 0;
            temp1.erase(temp1.begin() + 0);
            temp1 += str[4];
            if (temp1 == s1)
                count_kick++;
            for (int i = 5; i < str.length(); i++)
            {
                temp1.erase(temp1.begin() + 0);
                temp1 += str[i];
                if (temp1 == s1)
                    count_kick++;
                temp2.erase(temp2.begin() + 0);
                temp2 += str[i];
                if (temp2 == s2)
                    ans+=count_kick;
            }

            cout << "Case #" << t << ": " << ans << endl;
        }

        else  cout << "Case #" << t << ": " << 0 << endl;

        t++;
    }
    return 0;
}