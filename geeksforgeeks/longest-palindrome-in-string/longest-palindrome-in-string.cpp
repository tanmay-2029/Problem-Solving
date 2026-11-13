class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxi=1;
        if (n<=1) return s;
        int l,r;
        string temp;
        temp+=s[0];
        for (int i=0;i<n;i++){
            l=i;
            r=i;
            while (l>=0 && r<n && s[l]==s[r]){
                if (r-l+1>maxi){
                    maxi = r-l+1;
                    temp=s.substr(l,maxi);
                }
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while (l>=0 && r<n && s[l]==s[r]){
                if (r-l+1>maxi){
                    maxi = r-l+1;
                    temp=s.substr(l,maxi);
                }
                l--;
                r++;
            }
        }
        return temp;
    }
};