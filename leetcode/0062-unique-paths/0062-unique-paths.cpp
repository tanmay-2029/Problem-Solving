class Solution {
public:
    int uniquePaths(int m, int n) {
        m=m-1;
        n=n-1; 
        int k=m+n;
        long double up=1,i=max(m,n)+1;
        int l=1;
        while (i!=k+1){
            up=up*i/l;
            i++;
            l++;
        }
        return up;
    }
};