class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        // -3 0 1 2
        // n*n*logn solution!
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int sum = nums[0] + nums[1] + nums[2];
        if(sum >= target) return sum;
        
        sum = nums[n-1] + nums[n-2] + nums[n-3];
        if(sum <= target) return sum;
        
        int diff = abs(sum-target);
        
        for(int i=0; i<n-2; i++)
        {
            for(int j=i+1; j<n-1; j++)
            {
                auto it = std::lower_bound(nums.begin()+j+1, nums.end(), target-nums[i]-nums[j]);
                int temp = it == nums.end() ? nums[i]+nums[j]+nums[n-1] : nums[i]+nums[j]+(*it);
                if(abs(temp-target) < diff) {
                    sum = temp;
                    diff = abs(temp-target);
                }
                
                it--;
                if(it != nums.begin()+j) {
                    temp = nums[i] + nums[j] + *it;
                
                    if(abs(temp-target) < diff) {
                        sum = temp;
                        diff = abs(temp-target);
                    }                    
                }
            }
        }
        
        return sum;
    }
};