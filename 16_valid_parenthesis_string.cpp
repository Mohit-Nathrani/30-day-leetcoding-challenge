class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') c1++;
            else if(s[i]=='*') c2++;
            else c3++;
            
           if(c1+c2<c3) return false;
        }
        
        c1=0,c2=0,c3=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')') c1++;
            else if(s[i]=='*') c2++;
            else c3++;
            
           if(c1+c2<c3) return false;
        }
        return true;
    }
};