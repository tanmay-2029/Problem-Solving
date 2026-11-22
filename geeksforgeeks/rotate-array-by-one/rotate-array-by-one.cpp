class Solution {
  public:
    void rotate(vector<int> &nums) {
        //
        int n = nums.size();
        int prev=nums[0];
        int next;
        if(n<=1) return;
        for (int i=1;i<n;i++){
            next=nums[i];
            nums[i]=prev;
            prev=next;
        }
        nums[0]=next;
    }
};