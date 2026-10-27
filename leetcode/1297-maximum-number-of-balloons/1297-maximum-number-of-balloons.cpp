class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int nt = text.length();
        int cnt=0;
        unordered_map <char,int> mp;
        for (int i=0;i<nt;i++){
            if(text[i]=='b') mp['b']++;
            else if(text[i]=='a') mp['a']++;
            else if(text[i]=='l') mp['l']++;
            else if(text[i]=='o') mp['o']++;
            else if(text[i]=='n') mp['n']++;
        }
        int b=mp['b'];
        int a=mp['a'];
        int l=mp['l']/2;
        int o=mp['o']/2;
        int n=mp['n'];
        cnt=min(a,b);
        cnt=min(cnt,l);
        cnt=min(cnt,o);
        cnt=min(cnt,n);
        return cnt;
    }
};