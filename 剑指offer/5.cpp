// 5. 最长回文子串


// 方法1  动态规划
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n < 2){
            return s;
        }
        int max_Length = 1;
        int begin = 0;
        vector<vector<int>> dp(n,vector<int>(n));
        for(int i = 0;i++;i<n){
            dp[i][i] = true;
        }
        for(int L=2;L<n+1;L++)
            for(int i = 0;i<n;i++){
                int j = i + L - 1;
                if(j > n-1) break;
                if(s[i] == s[j]){
                    if(j - i < 3) dp[i][j] = true;
                    else dp[i][j] = dp[i+1][j-1];
                    if(j - i + 1 > max_Length & dp[i][j] == true){
                        begin = i;
                        max_Length = j - i + 1;
                    }
                }else{
                   continue;
                }
            }
        return s.substr(begin,max_Length);
    }
};


//  中心扩散法
