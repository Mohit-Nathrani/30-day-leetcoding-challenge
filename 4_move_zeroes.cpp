class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(), pr=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) nums[pr++]=nums[i];
        }
        for(int i=pr;i<n;i++) nums[i]=0;
    }
};