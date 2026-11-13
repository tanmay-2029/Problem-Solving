class Solution {
public:

    string cands(string k){
        stack <char> sk;
        int cnt=0;
        string num="";
        char prev;
        for (int i=0;i<k.length();i++){
            if(cnt==0){
                prev=k[i];
                cnt++;
            }
            else if (prev==k[i]){
                cnt++;
            }
            else {
                num+=to_string(cnt);
                num+=prev;
                cnt=1;
                prev=k[i];
            }
        }
        num += to_string(cnt);
        num += prev;
        return num;
    }

    string countAndSay(int n) {
        string m = to_string(1);
        n=n-1;
        while(n--) m=cands(m);
        return m;
    }
};