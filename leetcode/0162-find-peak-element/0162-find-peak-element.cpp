class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();

        if (n==1) return 0;
        else if (nums[0]>nums[1]) return 0;
        else if (nums[n-1]>nums[n-2]) return n-1;

        int l=0,r=n-1;
        int mid=l+(r-l)/2;

        while(r>=l){
            if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if (nums[mid]<nums[mid+1]) l=mid+1;
            else r=mid-1;
            mid=l+(r-l)/2;
            if (r==l) break;
            if (mid==0) mid+=1;
            if (mid==n-1) mid-=1;
        }
        return mid;
    }
};