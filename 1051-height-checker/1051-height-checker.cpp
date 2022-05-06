class Solution {
public:
    int heightChecker(vector<int>& h1) {
    int i=0, n=h1.size();
    vector<int> h2(n);
    for(i=0; i<n; i++)
    {
        h2[i] = h1[i];
    }
    sort(h1.begin(), h1.end());
    int ans = n;
    for(i=0; i<n; i++)
    {
        if(h1[i]==h2[i]) --ans;
    }
    return ans;
    }
};