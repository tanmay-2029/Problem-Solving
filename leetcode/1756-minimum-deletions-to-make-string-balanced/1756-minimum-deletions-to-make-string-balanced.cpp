class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        int cnt = 0, bcnt=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='b') bcnt++;
            else{
                if(bcnt>0){
                    bcnt--;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};