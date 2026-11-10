class Solution {
public:
    string baseNeg2(int n) {
        
        string s="";
        int k = n;
        int dig=0;
        stack <int> sk;
        int cnt=0;
        do{
            cnt++;
            if (cnt%2==0 && k%2!=0){
                k+=1;
                dig=1;
            }
            else dig=k%2;
            k=k/2;
            sk.push(dig);
        }
        while(k);
        while(!sk.empty()){
            s+=to_string(sk.top());
            sk.pop();
        }
        return s;
    }
};