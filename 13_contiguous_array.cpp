class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ones=0, zeros=0, ans=0; 
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zeros++;
            else ones++;
            if(mp.find(ones-zeros)==mp.end())
                mp[ones-zeros]=i;
            else
                ans=max(ans, i-mp[ones-zeros]);
        }
        return ans;
    }
};