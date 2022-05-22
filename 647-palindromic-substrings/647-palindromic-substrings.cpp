class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        for(int i=0; i<n/2; i++)
        {
            if(s[i] != s[n-i-1]) return false;
        }
        return true;
    }
    
    int countSubstrings(string s) {
        int n = s.size();
        int ans = n;
        
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(isPalindrome(s.substr(i, j-i+1))) ans++;
            }
        }
        
        return ans;
    }
};