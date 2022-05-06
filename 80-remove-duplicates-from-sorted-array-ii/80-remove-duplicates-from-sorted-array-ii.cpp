class Solution {
public:
    int removeDuplicates(vector<int>& v) {
    bool neverOccurred=1;
    int n = v.size();
    if(n<=2) return n;
    int i=1, j=0;
    for( ; i<n; i++)
    {
        if(neverOccurred)
            if(v[i]==v[j])
                neverOccurred=0;
        if(v[i]!=v[j])
        {
            if(j+2<i)
                if(v[j+2]!=v[i])
                    v[j+2] = v[i];
            j++;
        }
    }
    return neverOccurred? j+1: j+2;
    }
};