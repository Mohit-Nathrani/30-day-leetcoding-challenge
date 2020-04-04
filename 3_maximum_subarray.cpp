class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mn=0, mg=nums[0];
        for(int i=0;i<nums.size();i++){
            mn+=nums[i];
            if(mg<mn) mg=mn;
            if(mn<0) mn=0;
        }
        return mg;
    }
};