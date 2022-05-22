class Solution {
public:
    string reverse(string s) {
        string r = "";
        for(int i=0; s[i]; i++) r = s[i] + r;
        return r;
    }
    
    int longestPalindromeSubseq(string s) {
        //  cbbd
        //  0000
        //d00001
        //b00111
        //b00122
        //c01122
        // longest palindromic subseq is equal to longest common sequence between string and reverse string
        string r = reverse(s);
        
        int n = s.size();
        int dp[n+1][n+1];
        
        for(int i=0; i<=n; i++) {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                int add = s[i-1] == r[j-1] ? 1 : 0;
                dp[i][j] = max({ dp[i-1][j-1] + add, dp[i-1][j], dp[i][j-1] });
            }
        }
        return dp[n][n];
    }
};