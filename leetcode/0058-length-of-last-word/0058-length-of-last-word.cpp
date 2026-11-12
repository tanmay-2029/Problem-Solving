class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0,prev=0;
        for (int i=0;i<s.length();i++){
            if (s[i]==' ') {
                if (cnt>0) prev=cnt;
                cnt=0;
            }
            else cnt++;
        }
        return (cnt==0?prev:cnt);
    }
};