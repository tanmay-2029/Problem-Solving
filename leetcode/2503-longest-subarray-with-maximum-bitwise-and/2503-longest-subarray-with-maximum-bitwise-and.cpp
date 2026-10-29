class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return 1;
        int maxi=-1;
        for (int i=0;i<n;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
            }
        }
        int lenmax=0;
        int curr=0;
        for(int i=0;i<n;i++){
            if(nums[i]==maxi){
                curr++;
            }
            else curr=0;
            lenmax=max(lenmax,curr);
        }
        return lenmax;
    }
};