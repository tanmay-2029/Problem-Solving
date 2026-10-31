class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1;
        int cnt=0;
        for (int m : arr){
            while(m!=i){
                cnt++;
                if(cnt==k) return i;
                i++;
            }
            i++;
        }
        return i-cnt+k-1;
    }
};