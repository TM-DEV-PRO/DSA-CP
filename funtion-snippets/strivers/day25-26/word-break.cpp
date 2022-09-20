class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
       unordered_set<string> dict;
        for(auto i:wordDict)
            dict.insert(i);
        vector<bool> dp(s.length()+1,false);
        dp[0]=true;
        for(int i=1;i<=s.length();i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]){
                    string word = s.substr(j,i-j);
                    if(dict.find(word)!=dict.end()){
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[s.length()];
    }
};