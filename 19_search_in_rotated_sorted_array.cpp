class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return -1;
        
        // search pivot
        int l=0,r=n-1;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]<nums[n-1]) r=mid;
            else l=mid+1;
        }
        int pivot=l;
        
        // search in left
        l=0, r=pivot-1;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]<target) l=mid+1;
            else r=mid;
        }
        if(nums[l]==target) return l;

        //search in right
        l=pivot, r=n-1;
        while(l<r){
            int mid = (l+r)/2;
            if(nums[mid]<target) l=mid+1;
            else r=mid;
        }
        if(nums[l]==target) return l;

        return -1;
    }
};