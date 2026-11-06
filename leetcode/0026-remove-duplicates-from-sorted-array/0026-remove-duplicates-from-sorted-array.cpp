class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int prev=-101;
        vector <int> v;
        
        for (int i=0;i<n;i++){
            if (nums[i]==prev) continue;
            prev=nums[i];
            v.emplace_back(nums[i]);
        }

        for (int i=0;i<v.size();i++) nums[i]=v[i];

        return v.size();
    }
};