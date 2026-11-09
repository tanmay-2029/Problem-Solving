class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        vector <string> v;
        int n = nums.size();
        if (n==0) return v;
        if (n==1){
            v.emplace_back(to_string(nums[0]));
            return v;
        }
        string s="";
        int cnt=1;
        int st = nums[0];

        for (int i=1;i<n;i++){

            if (st+cnt==nums[i]) cnt++;

            else if(st+1!=nums[i]){
                s+=to_string(st);
                if (cnt>1) {
                    s+="->"; 
                    s+=to_string(nums[i-1]);
                }
                v.emplace_back(s);
                s="";
                st=nums[i];
                cnt=1;
            }
        }
        if (cnt==1) s+=to_string(st);
        else{
            s+=to_string(st);
            s+="->";
            s+=to_string(nums[n-1]);
        }
        v.emplace_back(s);
        return v;
    }
};
