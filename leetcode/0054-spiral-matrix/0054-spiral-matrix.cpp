class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int l=0,r=n-1,u=1,d=m-1;
        vector <int> v;
        int cnt=0;
        int i=0,j=0;
        while (1){
            while(j<r){
                v.emplace_back(matrix[i][j]);
                cnt++;
                j++;
                if(j==r) r--;
            }
            if (cnt==m*n-1) break;
            while(i<d){
                v.emplace_back(matrix[i][j]);
                cnt++;
                i++;
                if(i==d) d--;
            }
            if (cnt==m*n-1) break;
            while(j>l){
                v.emplace_back(matrix[i][j]);
                cnt++;
                j--;
                if(j==l) l++;
            }
            if (cnt==m*n-1) break;
            while(i>u){
                v.emplace_back(matrix[i][j]);
                cnt++;
                i--;
                if(i==u) u++;
            }
            if (cnt==m*n-1) break;
        }
        v.emplace_back(matrix[i][j]);
        return v;
    }
};