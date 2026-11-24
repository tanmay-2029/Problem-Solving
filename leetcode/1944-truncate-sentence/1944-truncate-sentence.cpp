class Solution {
public:
    string truncateSentence(string s, int k) {
        string m ="";
        int cnt=0;
        int i=0;
        while (s[i]==' ') i++;
        while (i!=s.length()){
            if(s[i]==' ') cnt++;
            if (cnt==k) break;
            m+=s[i];
            i++;
        }
        return m;
    }
};