class Solution {
public:
    void process(string &S){
        int prev=0;
        for(int i=0;i<S.size();i++){
            if(S[i]!='#') S[prev++]=S[i];
            else if(prev>0) prev--;
        }
        S = S.substr(0, prev);
    }
    
    bool backspaceCompare(string S, string T) {
        process(S);
        process(T);
        return (S==T);
    }
};