class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.length();
        int n2 = text2.length();
        vector <vector <int>> v((n1+1),vector <int> (n2+1));
        for (int i=0;i<n1;i++) v[i][0]=0;
        for (int i=0;i<n2;i++) v[0][i]=0;
        for (int i=0;i<n1;i++){
            for (int j=0;j<n2;j++){
                if(text1[i]==text2[j]) v[i+1][j+1] = 1 + v[i][j];
                else v[i+1][j+1]=max(v[i][j+1],v[i+1][j]);
            }
        }
        return v[n1][n2];
    }
};