class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int eve = 0, odd = 1;
        while(eve<nums.size() && odd<nums.size()){
            if(nums[eve]%2==1){
                swap(nums[eve], nums[odd]);
                odd+=2;
            }
            else{
                eve+=2;
            }
        }
        return nums;
    }
};