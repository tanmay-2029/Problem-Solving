class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        int n=s1.length();
                for (int i=0;i<n;i++){
                    if (s1==s2) return true;
                    s1+=s1[0];
                    s1.erase(0,1);
                }
                return false;
    }
};