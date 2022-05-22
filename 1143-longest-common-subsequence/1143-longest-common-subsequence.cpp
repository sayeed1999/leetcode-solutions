class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        // this is a popular dp problem! solved in matrix table
        int n = s1.size();
        int m = s2.size();
        
        int dp[n+1][m+1];
        
        for(int i=0; i<=n; i++)
            dp[i][0] = 0;
        for(int i=0; i<=m; i++)
            dp[0][i] = 0;
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                int add = s1[i-1] == s2[j-1] ? 1 : 0;
                dp[i][j] = max({ dp[i-1][j-1]+add, dp[i-1][j], dp[i][j-1] });
            }
        }
        
        return dp[n][m];
    }
};