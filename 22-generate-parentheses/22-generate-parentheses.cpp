class Solution {
public:
void backtrack(int l, int r, string s, vector<string>& ret, int n)
{
    if(l==n && r==n){
        ret.emplace_back(s);
        return;
    }
    string tmp;
    if(l==r){
        tmp = s + '(';
        backtrack(l+1, r, tmp, ret, n);
    }
    else if(l>r && l<n){
        tmp = s + '(';
        backtrack(l+1, r, tmp, ret, n);
        tmp = s + ')';
        backtrack(l, r+1, tmp, ret, n);
    }
    else if(l==n && r<l){
        tmp = s + ')';
        backtrack(l, r+1, tmp, ret, n);
    }
}

    
    vector<string> generateParenthesis(int n) {
    vector<string> ret;
    int l=0, r=0;
    string s = "";
    backtrack(l, r, s, ret, n);
    return ret;
    }
};