class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        int maxi = -1;
        while(l<r){
            if(nums[l]==nums[r]*-1){
                maxi = max(maxi, nums[r]);
                break;
            }
            else if(nums[l]>-1*nums[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return maxi;
    }
};