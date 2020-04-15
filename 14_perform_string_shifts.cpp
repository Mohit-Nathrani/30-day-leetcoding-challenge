class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int left=0,right=0;
        for(vector<int> n: shift){
            if(n[0]==0) left+=n[1];
            else right+=n[1];
        }
        int n=s.size();
        right=right%n;
        left=left%n;
        right = (n+right-left)%n;
        string lpart=s.substr(0, s.size()-right);
        string rpart=s.substr(s.size()-right, right);
        return rpart+lpart;
    }
};