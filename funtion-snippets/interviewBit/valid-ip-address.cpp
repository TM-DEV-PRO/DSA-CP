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
 vector<string> restoreIpAddresses(string s)  {
            vector<string> ans;
            if (s.size() > 12 || s.size() < 4)
                return ans;

            for (int i = 1; i < 4; i++) {
                string first  =  s.substr(0, i);
                if (!isValid(first))
                    continue;
                for (int j = 1; i + j < s.size() && j < 4; j++) {
                    string second  =  s.substr(i, j);
                    if (!isValid(second))
                        continue;
                    for (int k = 1; i + j + k < s.size() && k < 4; k++) {
                        string third = s.substr(i + j, k);
                        string fourth = s.substr(i + j + k);
                        if (isValid(third) && isValid(fourth)) {
                            string current  =  first + "." + second + "." + third + "." + fourth;
                            ans.push_back(current);
                        }
                    }
                }
            }

            return ans;
        }

        bool isValid(string s) {
            if (s.size() > 1 && s[0]  ==  '0')
                return false;
            if (stoi(s) <= 255 && stoi(s) >= 0)
                return true;
            else
                return false;
        }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

return 0;
}