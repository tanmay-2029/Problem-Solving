class Solution {
public:
    bool checkValidString(string s) {
        stack <char> l,st;
        for (int i=0;i<s.length();i++){
            if (s[i]=='(') l.push(i);
            else if (s[i]==')') {
                if (l.empty() && st.empty()) return false;
                else if(!l.empty()) l.pop();
                else if(!st.empty()) st.pop();
            }    
            else st.push(i);
        }
        if (!l.empty() && st.empty()) return false;
        while(!l.empty()){
            if(st.empty()) return false;
            if(st.top()>l.top()){
                st.pop();
                l.pop();
            }
            else return false;
        }
        return true;
    }
};