class Solution {
public:
    int robx(vector<int>& temp) {
        vector<int>dp(temp.size(),-1);
        int prev = temp[0];
        int prev2 = 0;
        for(int i=1;i<temp.size();i++){
            int pick = temp[i]+prev2;
            int notPick = prev;
            int cur = max(pick, notPick);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
     vector<int> temp1, temp2;
     for(int i=0;i<nums.size();i++){
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=nums.size()-1) temp2.push_back(nums[i]);
     }   
     return max(robx(temp1), robx(temp2));
    }
};