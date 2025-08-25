class Solution {
public:
    int findMaxvalue(int ind, vector<int>& nums,vector<int>& dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick = nums[ind]+findMaxvalue(ind-2,nums,dp);
        int notPick = 0+findMaxvalue(ind-1,nums,dp); 
        return dp[ind]=max(pick, notPick);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1;i<nums.size();i++){
            int pick = nums[i]+prev2;
            int notPick = prev;
            int cur = max(pick, notPick);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
};