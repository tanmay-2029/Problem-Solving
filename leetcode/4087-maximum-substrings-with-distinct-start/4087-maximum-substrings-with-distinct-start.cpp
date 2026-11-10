class Solution {
public:
    int maxDistinct(string s) {
        int n = s.length();
        unordered_map <char,int> um;
        int cnt=0;
        for (int i=0;i<n;i++){
            if(um[s[i]]==0){
                um[s[i]]=1;
                cnt++;
            }
        }
        return cnt;
    }
};