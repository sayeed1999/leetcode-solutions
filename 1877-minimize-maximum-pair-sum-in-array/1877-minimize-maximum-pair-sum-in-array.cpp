class Solution {
public:
    int minPairSum(vector<int>& nums) {
    int i=0, j=0;
    
    sort(nums.begin(), nums.end());

    int ans = 0;

    int n = nums.size();
    i=0; j=n-1;
    while(i<j)
    {
        ans = max(ans, nums[i]+nums[j]);
        i++; --j;
    }
    return ans;
    }
};