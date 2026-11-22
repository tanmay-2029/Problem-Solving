class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map <int,int> um;
        vector <int> v;
        for (int i=0;i<a.size();i++){
            if(um[a[i]]==0) {
                v.emplace_back(a[i]);
                um[a[i]]++;
            }    
            else continue;
        }
        for (int i=0;i<b.size();i++){
            if(um[b[i]]==0) {
                v.emplace_back(b[i]);
                um[b[i]]++;
            }    
            else continue;
        }
        return v;
    }
};