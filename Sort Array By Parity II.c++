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


class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
     int e=0, o=1;
     while(e<nums.size() && o<nums.size()){
        while(e<nums.size() && nums[e]%2==0) e+=2;
        while(o<nums.size() && nums[o]%2==1) o+=2;
        if(e<nums.size() && o<nums.size()){
            nums[e]=nums[e]^nums[o];
            nums[o]=nums[e]^nums[o];
            nums[e]=nums[e]^nums[o];
        }
     }   
    return nums;
    }
};