class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int z=0,o=0,t=0;
        int n = arr.size();
        for (int i=0;i<n;i++){
            if (arr[i]==0) z++;
            else if (arr[i]==1) o++;
            else t++;
        }
        
        int k=0;
        while(z){
            arr[k]=0;
            z--;
            k++;
        }
        while(o){
            arr[k]=1;
            o--;
            k++;
        }
        while(t){
            arr[k]=2;
            t--;
            k++;
        }
    }
};