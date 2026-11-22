class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack <int> sp,sn;
        for (int i=0;i<n;i++){
            if(arr[i]<0) sn.push(arr[i]);
            else sp.push(arr[i]);
        }
        int i=n-1;
        while (!sn.empty()) {
            arr[i]=sn.top();
            sn.pop();
            i--;
        }
        while (!sp.empty()) {
            arr[i]=sp.top();
            sp.pop();
            i--;
        }
    }
};