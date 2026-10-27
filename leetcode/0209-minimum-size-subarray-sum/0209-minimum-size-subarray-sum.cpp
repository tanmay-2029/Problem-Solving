class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int n=nums.size();
      int cnt=n+1;
      int l=0;
      int r=0;
      int sum=nums[0];
      while (r!=n){
        if(sum<target){
            r++;
            if(r==n) break;
            sum+=nums[r];
        }
        else if(sum>target){
            cnt=min(cnt,r-l+1);
            sum-=nums[l];
            l++;
        }
        else if(sum==target){
            cnt=min(cnt,r-l+1);
            r++;
            if(r==n) break;
            sum+=nums[r];
            sum-=nums[l];
            l++;
        }
        else if(l==r && sum>target) return 1;
      }
      if(cnt==n+1) cnt=0;
      return cnt;
    }
};