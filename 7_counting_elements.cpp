class Solution {
public:
    int countElements(vector<int>& arr) {
        unordered_set<int> st;
        for(int i=0;i<arr.size();i++) 
        	st.insert(arr[i]);
        
        int cnt=0;
        for(int i=0;i<arr.size();i++)
            if(st.count(arr[i]+1)>0) cnt++;
        return cnt;    
    }
};