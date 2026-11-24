class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int st=0;
        int sign=1;
        long long num=0;

        for (int i=0;i<n;i++){
            if(st==0){
                if(s[i]==' ') continue;
                else if (s[i]=='-'){
                    sign=-1;
                    st=1;
                }
                else if (s[i]=='+') st=1;
                else if(isdigit(s[i])){
                    st=1;
                    num=s[i]-'0';
                }
                else return 0;
            }
            else{
                if(isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                }
                else break;
            }

            if(num > INT_MAX){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
        }

        return sign*num;
    }
};