class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> v={-1,-1};
        if(n==0) return v;
        int l=0,r=n-1;
        int mid=r/2;
        while(1){
            if(nums[0]==target) {v[0]=0;break;}
            if(target>nums[mid]) l=mid+1;
            else if(target<nums[mid]) r=mid-1;
            else if(target==nums[mid]){
                if(nums[mid-1]!=target) {v[0]=mid;break;}
                else r=mid-1;
            }
            mid=l+(r-l)/2;
            if (l>r) return v;
        }
        l=0;
        r=n-1;
        mid=r/2;
        while(1){
            if(nums[n-1]==target) {v[1]=n-1;break;}
            if(target>nums[mid]) l=mid+1;
            else if(target<nums[mid]) r=mid-1;
            else if(target==nums[mid]){
                if(nums[mid+1]!=target) {v[1]=mid;break;}
                else l=mid+1;
            }
            mid=l+(r-l)/2;
        }
        return v;   
    }
};







































