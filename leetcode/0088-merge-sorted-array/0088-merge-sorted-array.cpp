class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> v;
        int o=0,t=0;
        while(o<m && t<n){
            if (nums1[o]<nums2[t]){
                v.emplace_back(nums1[o]);
                o++;
            }
            else if (nums1[o]>nums2[t]){
                v.emplace_back(nums2[t]);
                t++;
            }
            else if (nums1[o]==nums2[t]){
                v.emplace_back(nums2[t]);
                t++;
                v.emplace_back(nums1[o]);
                o++;
            }
        }
        while (o<m) {v.emplace_back(nums1[o]); o++;}
        while (t<n) {v.emplace_back(nums2[t]); t++;}

        for (int i=0;i<m+n;i++) nums1[i]=v[i];
    }
};