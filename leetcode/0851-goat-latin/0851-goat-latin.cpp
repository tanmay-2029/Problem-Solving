class Solution {
public:
    string toGoatLatin(string sentence) {
        int n = sentence.size();
        string s="";
        bool sp = true;
        int cnt=0;
        bool cons=false;
        string con;
        for (int i=0;i<n;i++){
            if (sp && (sentence[i]=='a' ||sentence[i]=='e' ||sentence[i]=='i' ||sentence[i]=='o' ||sentence[i]=='u' || sentence[i]=='A' ||sentence[i]=='E' ||sentence[i]=='I' ||sentence[i]=='O' ||sentence[i]=='U')){
                        s+=sentence[i];
                        sp=false;
                    }
            else if (sentence[i]==' '){
                if (cons) s+=con;
                cons=false;
                s+="ma";
                cnt++;
                int k=cnt;
                while(k--) s+="a";
                sp=true;
                s+=" ";
            }        
            else if(sp) {
                cons=true;
                con=sentence[i];
                sp = false;
                continue;
            }
            else {
                sp=false;
                s+=sentence[i];
            }

        }
        cnt++;
        if (cons) s+=con;
        s+="ma";
        while(cnt--) s+="a";
        return s;
    }
};