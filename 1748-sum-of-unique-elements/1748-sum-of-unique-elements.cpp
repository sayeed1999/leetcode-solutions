class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> m;
    for(auto it: nums)
    {
        m[ it ]++;
    }
    int ret = 0;
    for(auto it: m)
    {
        if(it.second==1) ret += it.first;
    }
    return ret;
    }
};