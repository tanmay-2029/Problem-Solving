class Solution {
public:
    bool isThree(int n) {
        if (n==1 || n==2) return false;
        int cnt=0;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                if(n/i==i) cnt++;
                else return false;
                if(cnt>1) return false;
            }
        }
        if (cnt!=1) return false;
        return true;
    }
};