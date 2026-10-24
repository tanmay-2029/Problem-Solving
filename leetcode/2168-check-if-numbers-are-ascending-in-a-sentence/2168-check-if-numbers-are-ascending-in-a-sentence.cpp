class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = s.length();
        string st="";
        stack <int> sk;
        for (int i=0;i<n;i++){
            if (isdigit(s[i])) st+=s[i];
            else if (s[i]==' '){
                if(st!="") sk.push(stoi(st));
                st="";
            }
        }
        if(st!="") sk.push(stoi(st));
        int top=sk.top();
        sk.pop();
        while(!sk.empty()){
            if(top<=sk.top()) return false;
            top=sk.top();
            sk.pop();
        }
        return true;
    }
};
