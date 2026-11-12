class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack <char> st;
        string sk="";
        for (int i=0;i<S.length();i++) st.push(S[i]);
        for (int i=0;i<S.length();i++){
            sk+=st.top();
            st.pop();
        }
        return sk;
    }
};