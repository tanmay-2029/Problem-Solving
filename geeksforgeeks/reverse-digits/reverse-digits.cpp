class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        stack <int> s;
        while(n){
            s.push(n%10);
            n=n/10;
        }
        int m=0;
        int i=0;
        while(!s.empty()){
            m+=s.top()*pow(10,i);
            i++;
            s.pop();
        }
        return m;
    }
};