class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int cnt=0;
        int prev=nums[0];
        for (int i=0;i<nums.size()-1;i++){
            if (prev==nums[i+1]) {
                cnt++;
            }
            else prev=nums[i+1];
        }
        return cnt;
    }
};